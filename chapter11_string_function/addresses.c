#include<stdio.h>
#define MSG "I am special"

int main(void){
	char ar[] = MSG;
	char *ptr = MSG;
	char c;
	char *c_dest;
	while((c = getchar()) != '\n' && c != EOF){
		*c_dest++ = c;	
	}
	*c_dest++ = '\0';


	printf("address of MSG:%p\n",MSG);
	printf("address of ar:%p\n",ar);
	printf("address of ptr:%p\n",ptr);
	printf("address of \"I am special\":%p\n",MSG);
	printf("address of c_dest:%p\n",c_dest);
	return 0;
}
