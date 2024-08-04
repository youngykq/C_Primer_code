#include<stdio.h>
#include<string.h>
#define PRAISE "You are an extraordinary being."

int main(void){
	char name[40];
	printf("Please input your name:");
	scanf("%s",name);
	printf("Hello,%s. %s\n",name,PRAISE);
	printf("strlen of name is %zd，sizeof name is %zd\n",strlen(name),sizeof(name));
	printf("strlen of PRAISE is %zd,sizeof PRAISE is %zd\n",strlen(PRAISE),sizeof(PRAISE));
	return 0;
}
