#include<stdio.h>

int main(void){
	char respone;
	int guess = 0;
	printf("Let's play a guess number game now!\n");
	printf("respone whit n if i guess wrong,y either\n ");
	printf("Is that 0?\n");
	while((respone = getchar()) != 'y'){
		if(respone == 'n')
			printf("Damn! I guess wrong,maybe the number is %d?\n",++guess);
		else
			printf("You just input a wrong character!\n");
		while(getchar() != '\n')
			continue;	
	}
	printf("I knew i can do it!\n");
	return 0;
}
