#include<stdio.h>
extern unsigned rand0(void);
int main(void){
	int count;
	for(count = 0;count < 5;count++){
		printf("the random number is :%d\n",rand0());
	}

}
