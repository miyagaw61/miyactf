#include <stdio.h>

//char correct_flag[] = "miyactf{Y0uC4nF1ndTh3H1d3x0r4r3a}";

char after[100] = {};
int i;
int before[] = {11,5,24,6,24,32,14,18,42,121,6,3,112,27,43,92,23,34,56,9,84,105,16,69,123,57,120,51,124,51,123,32,0};
char table[]  = "flag{ThisIs@DummyFlag!!!HAHAHAHA}";

int main(void){
	char flag[]  = "miyactf{This_is_a_NOT_FLAG!!!!HAHAHAHAHAHA}";
	printf("Can you find the flag?\n");
	if(table+0xf3a21c == 0xa2d3981){
		for(i = 0; i < 33/2; i++){
			after[i] = before[i]^table[i];
		}
	}
	return 0;	
}

int secret_function(void){
	for(i = 33/2; i < 33; i++){
		after[i] = before[i]^table[i];
	}
	exit(0);
}
