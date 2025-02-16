#include<stdio.h>

int main(void){
	char respone;
	int guess = 0;
	printf("Let's play a guess number game now!\n");
	printf("respone whit n if i guess wrong,y either\n ");
	printf("Is that 1?\n");
	while((respone = getchar()) != 'y'){
		printf("i guess wrong,maybe the number is %d?\n",guess++);
		while(getchar() != '\n')
			continue;
	}
	printf("I knew i can do it!\n");
	return 0;
}
