#include<stdio.h>

int put2(const char *string);

int main(void){
	char str[10];
	fgets(str,10,stdin);
	int count = put2(str);
	printf("%d\n",count);
	return 0;
}
int put2(const char *string){
	int count = 0;
	while(*string){
		putchar(*string++);
		count++;
	}
	return count;
}
