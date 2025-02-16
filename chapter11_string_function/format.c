#include<stdio.h>
#define MAX 20

char* s_gets(char* str,int len);

int main(void){
	char first[MAX];
	char last[MAX];
	char format[MAX * 2 + 10];
	double price;
	puts("Enter a first name:");
	s_gets(first,MAX);
	puts("Enter a last name:");
	s_gets(last,MAX);
	puts("Enter your price:");
	scanf("%lf",&price);
	sprintf(format,"%s %s:%lf\n",first,last,price);
	puts(format);
	return 0;
}
char* s_gets(char* str,int len){
	char* ret_val;
	ret_val = fgets(str,len,stdin);
	int i = 0;
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
