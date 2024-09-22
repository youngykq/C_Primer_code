#include<stdio.h>
#include<string.h>
#define LEN 80

char *s_gets(char *string,int n);
int main(void){
	char str1[LEN];
	char str2[] = "we are family!";
	if(s_gets(str1,LEN)){
		strcat(str1,str2);
		puts(str1);
		puts(str2);
	}
	else
		puts("End of file encountered!");
	
	puts("Bye!");
	return 0;
}
char *s_gets(char *string,int n){
	char *res_str = fgets(string,n,stdin);
	int i = 0;
	if(res_str){
		while(string[i] != '\n' && string[i] != '\0')
			i++;
		if(string[i] == '\n')
			string[i] = '\0';
		else{
			while(getchar() != '\n')
				continue;
		}
	}
	return res_str;
}
