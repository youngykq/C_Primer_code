#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"diceroll.h"

int main(void){
	int sides,dice,status;
	int total = 0;
	srand((unsigned) time(0));
	puts("Enter the number of sides per die,0 to stop.");
	while(scanf("%d",&sides) == 1 && sides > 0){
		puts("How many dice?");
		if((status = scanf("%d",&dice)) != 1){
			if(status == EOF)
				break;
			else{
				puts("You should enter a integer such as 4.");
				puts("Les's begin again.");
				while(getchar() != '\n')
					continue;
				puts("How many sides? Enter 0 to stop.");
				continue;
			}
		
		}
		total = roll_n_dice(dice,sides);
		printf("You have rolled a %d using %d %d-sided dice.\n",total,dice,sides);
		puts("How many sides?");
	}
	printf("The rollem() function was called %d times.\n",roll_count);
	puts("GOOD FORTUNE TO YOU!");
	return 0;
}
