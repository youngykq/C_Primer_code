#include<stdio.h>
#define SIZE 10
int sump(int *start,int *end);

int main(void){
	int arr[SIZE] = {10,32,44,5,5,6,7,7,86,24};
	long answer = sump(arr,arr+SIZE);
	printf("%ld\n",answer);

	return 0;
}

int sump(int *start,int *end){
	long sump = 0;
	while(start < end){	
		sump += *start;
		start++;
	}
	return sump;
}
