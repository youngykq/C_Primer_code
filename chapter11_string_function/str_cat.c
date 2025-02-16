#include<stdio.h>
#include<string.h>
#define SIZE 80

char *s_gets(char *str,int len);

int main(void){
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";
	puts("What's is your favourite flower?");
	if(s_gets(flower,SIZE)){
		strcat(flower,addon);
		puts(flower);
		puts(addon);
	}
	else
		puts("Endof file encountered!");
	puts("Bye!");


	return 0;
}
char *s_gets(char *str,int len){
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
