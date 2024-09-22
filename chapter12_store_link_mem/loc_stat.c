#include<stdio.h>

void try_stat(void);

int main(void){
	int count;
	for(count = 1;count <= 3;count++){
		printf("Here comes iteration %d:\n",count);
		try_stat();
	}
	return 0;
}

void try_stat(void){
	int fade = 1;
	static int stay = 1i;
	printf("fade = %d and stay = %d\n",fade++,stay++);
}
