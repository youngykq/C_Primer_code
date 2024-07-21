#include<stdio.h>
#include<string.h>

void set_lower_case(char *s);

int main(void){
	char str[20];
	scanf("%s",str);
	set_lower_case(str);
	printf("%s\n",str);
	return 0;
}

void set_lower_case(char *s){
	size_t i;
	for(i = 0;i < strlen(s);i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] -= ('A' - 'a');
	}
}

