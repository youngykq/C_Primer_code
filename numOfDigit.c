#include<stdio.h>
int numOfDight(int num);
int main(void){
	int num;
	scanf("%d",&num);
	int count = numOfDight(num);
	printf("count = %d\n",count);
	return 0;
}

int numOfDight(int num){
	int count = 0;
	do{
		num = num/10;
		count++;
	}while(num > 0);
	return count;
}

