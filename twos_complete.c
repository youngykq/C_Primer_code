#include<stdio.h>
int absolute(int num);
int main(void){
	int num;
	scanf("%d",&num);
	int res = absolute(num);
	printf("%d\n",res);
	return 0;
}

int absolute(int num){
	int x = 0;
	if(num < x)
		return -num;
	else
		return num;
}

