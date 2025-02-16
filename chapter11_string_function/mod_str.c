#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define LIMIT 81

void ToUpper(char*);
int PunctCount(const char*);

int main(void){
	char line[LIMIT];
	char *punct;
	int count;
	puts("Enter a string:");
	fgets(line,LIMIT,stdin);
	punct = strchr(line,'\n');
	if(punct)
		*punct = '\0';
	ToUpper(line);
	count = PunctCount(line);
	puts(line);
	printf("That line has %d punctuation characters.\n",count);
	return 0;
}

void ToUpper(char* str){
	while(*str){
		*str = toupper(*str);
		str++;
	}
}

int PunctCount(const char* str){
	int count = 0;
	while(*str){
		if(ispunct(*str))
			count++;
		str++;
	}
	return count;
}
