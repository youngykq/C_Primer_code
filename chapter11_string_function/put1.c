#include<stdio.h>
#define LEN 10
void put1(const char *string);

int main(void){
	char str[LEN];
	gets(str);
	printf("puts output:");
	puts(str);	//print str without \n
	puts("Done!");
	printf("put1 output:");
	put1(str);
	puts("Done!");
	return 0;
}
void put1(const char *string){
	while(*string)
		putchar(*string++);
}
