#include<stdio.h>
#define MONTH 12

int main(){
	const int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	printf("month		day\n");
	for(int i = 0;i < MONTH;i++){
		printf("Month %3d has %4d days\n",i+1,month[i]);
	}
	return 0;
}
