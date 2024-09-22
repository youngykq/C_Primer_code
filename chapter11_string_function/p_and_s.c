#include<stdio.h>

int main(void){
	const char *mesg = "I love fangjianhua!";
	const char *ptr;
	ptr = mesg;
	printf("mesg = %s,	&mesg = %p,	value = %p\n",mesg,&mesg,mesg);
	printf("ptr = %s,	&ptr = %p,	value = %p\n",ptr,&ptr,ptr);

	return 0;
}
