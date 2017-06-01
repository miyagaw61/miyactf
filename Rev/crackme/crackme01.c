#include <stdio.h>

int main(void){
	char password[] = "Hello,Reversing";
	char buf[256];
	printf("Enter the password : ");
	gets(buf);
	if(! memcmp(password, buf, sizeof(password))){
		printf("Loged in.\n");
	}else{
		printf("Failed.\n");
	}
	return 0;	
}
