#include<stdio.h>
#include<string.h>
#define ANSWER "Grant"
#define SIZE 40

char *s_gets(char *string,int n);
int main(void){
	char answer[SIZE];

	puts("What is your answer?");
	s_gets(answer,SIZE);
	while(strcmp(answer,ANSWER)){
		puts("Your are wrong!Please input again:");
		s_gets(answer,SIZE);
	}
	puts("Your are right!");
	return 0;
}
char *s_gets(char *string,int n){
	int i = 0;
	char  *res_str = fgets(string,n,stdin);
	if(res_str){
		while(string[i] != '\n' && string[i] != '\0')
			i++;
		if(string[i] == '\n')
			string[i] = '\0';
		else
			while(getchar() != '\n')
			       continue;	
	}
	return res_str;
}
