#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXTILT 41
#define MAXAUTH 31

struct book{
	char title[MAXTILT];
	char author[MAXAUTH];
	float value;
};

char* s_gets(char* str,int len);

int main(void){
	struct book library;
	puts("Enter the bookname:");
	s_gets(library.title,MAXTILT);
	puts("Enter the author:");
	s_gets(library.author,MAXAUTH);
	puts("Enter the value of book:");
	scanf("%f",&library.value);
	printf("The book \"%s\" written by %s cost %f\n",library.title,library.author,library.value);

	return 0;
}

char* s_gets(char* str,int len){
	char* ret_val;
	char* find;
	ret_val  = fgets(str,len,stdin);
	if(ret_val){
		find = strchr(str,'\n');
			if(find)
				*find = '\0';
			else
				while(getchar() != '\n')
					continue;
	}
	return ret_val;
}
