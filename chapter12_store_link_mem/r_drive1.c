#include<stdio.h>
extern unsigned int rand1(void);
extern unsigned int srand1(unsigned seed);

int main(void){
	int count;
	int choice;
	puts("Please enter your choice(q to quit):");
	while(scanf("%d",&choice)){
		srand1(choice);
		for(count = 0;count < 5;count++){
			printf("The random number is :%d\n",rand1());
		
		}
	
		puts("Please enter your choice(q to quit):");
	}


}
