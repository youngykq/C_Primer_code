#include<stdio.h>
#include<string.h>
void fit(char *string,unsigned n);

int main(void){
	char str[] = "This is astring,and i love fangjianhuajiejie!";
	puts(str);
	fit(str,10);
	printf("\n");
	puts(str);
	puts(str + 11);
	return 0;
}
void fit(char *string,unsigned n){
	if(strlen(string) > n)
		string[n] = '\0';
}
