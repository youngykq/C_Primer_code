#include<stdio.h>
#include<string.h>
#define ANSWER "Grant"
#define SIZE 40

char* s_gets(char* str,int len);

int main(void){
	char log[SIZE];
	puts("What's your name?");
	if(s_gets(log,SIZE)){
		while(strcmp(log,ANSWER)){
			puts("Wrong!Please try again!");
			s_gets(log,SIZE);
		}
	}

	return 0;
}
char* s_gets(char* str,int len){
	char* ret_val;
	ret_val = fgets(str,len,stdin);
	if(ret_val){
		int i = 0;
		while(str[i] != '\n' && str[i] != '\0')
			i++;
		if(str[i] == '\n')
			str[i] = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
