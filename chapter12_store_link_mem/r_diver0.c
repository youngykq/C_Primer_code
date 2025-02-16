#include<stdio.h>

extern unsigned int rand0(void);

int main(void){
	int count;
	int rand;
	for(count = 0;count < 5;count++){
		rand = rand0();
		printf("The %d random number is :%d\n",count+1,rand);
	}
	
	return 0;
}
