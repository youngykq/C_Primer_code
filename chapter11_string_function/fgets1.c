#include<stdio.h>
#define LEN 16

int main(void){
	char str[LEN];
	puts("Please input your string:");
	fgets(str,LEN,stdin);
	printf("Here are your teice string:\n");
	fputs(str,stdout);
	puts(str);
	puts("Done!");

	printf("Input your string again:\n");
	fgets(str,LEN,stdin);
	puts(str);
	fputs(str,stdout);
	puts("Done again!");

	return 0;
}
