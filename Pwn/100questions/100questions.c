#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <signal.h>

int random(int min, int max);
void timekill();
 
void main(void){
	char buf[100] = {};
	char buf2[100] = {};
	int a;
	int b;
	int no = 0;
	int i = 0;
	setlinebuf(stdout);
	signal(SIGALRM, timekill);
	alarm(15);
	while(no < 100){
		a = random(1, 1000);
		b = random(1, 1000);
		printf("[%d]: %d + %d = ?\n",no+1, a, b);
		fgets(buf, 100, stdin);
		if(a + b == atoi(buf)){
			printf("Congrats!\n");
			i++;
		}
		no++;
	}
	if(i == 100){
		printf("Congratulations!!\nYou answered correctly 10 times!\nPlease input your name!!\n");
		gets(buf2);
		printf("You are genius!\nSee you again!!!\n");
	}
	return 0;
}

int random(int min, int max){
    struct tm *pnow;
    struct timeval now;
    gettimeofday(&now, NULL);
    pnow = localtime(&now.tv_sec);
	int rd = pnow->tm_year + 1900 + pnow->tm_mon + 1 + pnow->tm_mday + pnow->tm_hour + pnow->tm_min + pnow->tm_sec + now.tv_usec;
	srand(rd);	
	return rand() % max + min;
}

void timekill(){
	printf("\n\nYou are too late!!!\n\n");
	exit(0);
}
