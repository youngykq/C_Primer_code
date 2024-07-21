#include <stdio.h>
int recursion(int num);
int main(void){
	int num;
	scanf("%d",&num);	
	printf("%d\n",recursion(num));
	return 0;
}

int recursion(int num){
	if(num > 1)	
		return recursion(num - 1) * num;	
	else
		return num;
}


