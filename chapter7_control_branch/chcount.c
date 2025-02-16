#include<stdio.h>
#define SPACE '.'

int main(void){
	char ch;
	int chcount = 0;
	ch = getchar();
	while(ch != SPACE){
		if(ch != '\'' && ch != '"')
			chcount++;
		ch = getchar();
	}
	printf("%d\n",chcount);

	return 0;
}
