#include<stdio.h>
#define LEN 50
int fib_arr(int n);
int main(void){
	long long fib[LEN] = {0,1};
	for(int i = 2;i < LEN;i++ ){
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%d\n",fib[i]);
	}
		
	return 0;
}

int fib_arr(int n){


}

