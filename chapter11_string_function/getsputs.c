#include<stdio.h>
#define LEN 10

int main(void){
	char str[LEN];
	puts("Please input your string!");
	gets(str);
	printf("Here are twice output:\n");
	printf("%s\n",str);
	puts(str);
	puts("Done!");
	return 0;
}
