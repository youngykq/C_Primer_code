#include<stdio.h>
int sum(int begin,int end);
int main(void){
	int summary = sum(10,20);
	printf("%d\n",summary);
	return 0;
}

int sum(int begin,int end){
	int sum = 0;
	for(int i = begin;i <= end;i++){
		sum += i;
	}
	return sum;
}


