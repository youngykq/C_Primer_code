#include<stdio.h>
#define LEN 10

int main(void){
	char str[LEN];
	int i;
	printf("Please input your string:");
	while((fgets(str,LEN,stdin) != NULL && str[0] != '\n')){
		i = 0;
		while(str[i] != '\n' && str[i] != '\0'){
			i++;
		}
		if(str[i] == '\n')
			str[i] = '\0';
		else
			while(getchar() != '\n'){
				continue;
			}
		fputs(str,stdout);
	}

	return 0;
}
