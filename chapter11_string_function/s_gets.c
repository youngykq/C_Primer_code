#include<stdio.h>
#define LEN 10

char *str(char *st,int n);
int main(void){
	char string[LEN];
	str(string,LEN);
	puts(string);
	return 0;
}

char *str(char *st,int n){
	unsigned i = 0;
	char *res_str = fgets(st,n,stdin);
	if(res_str){
		while(st[i] != '\n' && st[i] != '\0'){
			i++;
		}
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return res_str;

}
