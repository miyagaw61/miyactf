#include <stdio.h>

int main(void){
	int before[] = {57,1,16,18,42,7,39,47,56,82,25,38,114,1,54,33,6,17,11,9,71,9};
	char table[] = "ThisIsATableForDecrypt";
	char after[100]  = {};
	int i;
	for(i = 0; i < sizeof(before)/sizeof(char)-1; i++){
		after[i] = before[i]^table[i];
	}
	printf("Can you find the flag?\n");
	return 0;	
}

