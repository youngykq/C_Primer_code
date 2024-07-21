#include<stdio.h>
int main(void){
	long long fib1 = 0;
	long long fib2 = 1;
	long long fib3;
	for(int i = 3;i <= 20;i++){
		fib3 = fib1 + fib2;
		printf("%lld\n",fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	return 0;
}

