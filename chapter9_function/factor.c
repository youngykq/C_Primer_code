#include<stdio.h>

int fact(int n);
int rfact(int n);


int main(void){
	int num;
	printf("Please input a number:");
	while((scanf("%d",&num)) == 1){
		if(num <= 0)
			printf("Don not input a negative number!\n");
		else if(num > 12)
			printf("Please input a number less than 12!\n");
		else{
			printf("The loop result is the num:%d  the sum:%d\n",num,fact(num));
			printf("The rescurion result is the num:%d the sum:%d\n",num,rfact(num));
		}
		printf("Please input another number:");
	}
	return 0;
}
int fact(int n){
	int sum = 1;
	while(n > 1){
		sum *= n;
		n--;
	}
	return sum;
}
int rfact(int n){
	int sum = 1;
	if(n > 0)
		sum = n * rfact(n - 1);
	else
		sum = 1;
	return sum;
}
