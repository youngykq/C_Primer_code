#include<stdio.h>
#include<time.h>

extern int rand1(void);
extern void srand1(unsigned seed);

int main(void){
	int count;
	puts("Please input your num:");
	srand1((unsigned)time(0));
	for(count = 0;count < 5;count++){
		printf("%d\n",rand1());
	}
	return 0;
}
