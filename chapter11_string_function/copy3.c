#include<stdio.h>
#include<string.h>
#define SIZE 40
#define TRAGSIZE 7
#define LIMIT 6

char* s_gets(char* str,int len);

int main(void){
	char words[LIMIT][TRAGSIZE];
	char temp[SIZE];
	int i = 0;
	int j;
	puts("Enter some words:");
	while(i < LIMIT && s_gets(temp,SIZE)){
		if(temp[0] == 'q'){
			strncpy(words[i],temp,TRAGSIZE - 1);
			words[i][TRAGSIZE - 1] = '\0';
			printf("%d strings has been copyde.Please continue to enter some words:\n",i+1);
			i++;
		}
		else
			puts("This string dosen't contain 'q',and it will not be copyed.");
	}
	for(j = 0;j < LIMIT;j++){
		printf("%s contains the 'q'\n",words[j]);
	}

	return 0;
}
char* s_gets(char* str,int len){
	char*ret_val;
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

