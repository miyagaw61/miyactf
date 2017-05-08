#include <stdio.h>

int main(int argc, char* argv[]){
	char password[] = "password";
	char input[30];
	int valid = 5;
	int a = argc + 0x04;

	printf("Enter the password : ");
	gets(input);

	if(!memcmp(input, password, 8)){
		a = a + 0x04;
		valid -= 1;
	}

	printf("Enter the password : ");
	gets(input);

	if(!memcmp(input, password, 8)){
		a = a + 0x04;
		valid -= 1;
	}

	printf("Enter the password : ");
	gets(input);

	if(!memcmp(input, password, 8)){
		a = a + 0x04;
		valid -= 1;
	}

	printf("Enter the password : ");
	gets(input);

	if(!memcmp(input, password, 8)){
		a = a + 0x04;
		valid -= 1;
	}

	printf("Enter the password : ");
	gets(input);

	if(!memcmp(input, password, 8)){
		a = a + 0x04;
		valid -= 1;
	}

	printf("\nNow checking...\n\n");

	if(valid != 2){
		printf("Oops!\nLogin failed!\n\n");
		exit(0);
	}else{
	   	if(a != 0x71){
			printf("Oops!\nLogin failed!\n\n");
			exit(0);
		}else if(!memcmp(argv[0x41], password, 8)){
			valid = 1;
		}
	}

	if(valid == 1){
		printf("Good job!\nCongratulations!\n\nSuccessfully logged in!\n\n\nThe Flag is miyactf{y0u_h4ve_");
		printf("%02x%04x%x%03x%x%x%x%02x",argc&0x1e ,argc<<2^0x1ff^0x7b, argc+4>>1&0x49 ,argc>>6, argc>>2^0x8 ,argc&0x16 ,argc&0x15 , argc>>6);
		printf("_p4ssw0rds}\n\n");
		exit(0);
	}else{
		printf("Oops!\nLogin failed!\n\n");
	}

	return 0;
}
