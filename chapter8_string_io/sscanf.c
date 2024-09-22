#include<stdio.h>

int main(void){
	char s[] = "2024-09-06";
       int year,month,day;
	if(sscanf(s,"%d-%d-%d",&year,&month,&day) == 3)
		 printf("%d-%d-%d\n",year,month,day);
	else
		printf("Wrong!\n");
	return 0;
}
