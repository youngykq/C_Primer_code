#include<stdio.h>
#include<string.h>
#define SIZE 30
#define BUGSIZE 13

char* s_gets(char* str,int len);

int main(void){
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";
	char bug[BUGSIZE];
	int available;
	puts("What's your favourite flowers?");
	s_gets(flower,SIZE);
	if(strlen(flower) + strlen(addon) + 1 <= SIZE)
		strcat(flower,addon);
	puts(flower);
	puts("What's your favourite bug?");
	s_gets(bug,BUGSIZE);
	available = BUGSIZE - strlen(bug) - 1;
	strncat(bug,addon,available);
	puts(bug);


	return 0;
}
char* s_gets(char* str,int len){
	char* ret_val;
	int i = 0;
	ret_val = fgets(str,len,stdin);
	if(ret_val){
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


