#include<stdio.h>

long get_pos_long(void);
int main(void){
	printf("%ld\n",get_pos_long());
	return 0;
}

long get_pos_long(void){
	long val;
	char ch;
	while((scanf("%ld",&val)) != 1 || val <= 0){
		printf("You just input a worng number:");
		while((ch = getchar()) != '\n'){
			putchar(ch);
			putchar('\n');
		}
		printf("Please input a number like:4,65,77...\n");
	}
	return val;
}







