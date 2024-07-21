#include<stdio.h>

size_t my_strlen(char *s);
int main(void){
	char name[] = "YK  Q  LOV   EFJH";
	printf("%ld\n",my_strlen(name));
	return 0;
}

size_t my_strlen(char *s){
	size_t len = 0;
	while(*s != '\0'){
		s++;
		len++;
	}
	return len;
}
