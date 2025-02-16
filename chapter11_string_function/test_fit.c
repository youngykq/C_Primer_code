#include<stdio.h>
#include<string.h>

void fit(char *str,int size);

int main(void){
	char mesg[] = "Things should be as simple as possible," "but not simpler.";
	puts(mesg);
	fit(mesg,38);
	puts(mesg);
	puts("Let's look at some more of the string.");
	puts(mesg + 39);
	return 0;
}

void fit(char *str,int size){
	if(strlen(str) > size)
		str[size] = '\0';
}
