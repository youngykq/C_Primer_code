#include<stdio.h>
#define LEN 10

int main(void){
	char str[LEN];
	printf("Please input your string:");
	while((fgets(str,LEN,stdin)) != NULL && str[0] != '\n'){
		fputs(str,stdout);
	}
	return 0;
}
