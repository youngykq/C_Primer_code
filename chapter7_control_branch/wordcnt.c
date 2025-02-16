#include<stdio.h>
#include<ctype.h>
#define SPACE ' '
#define STOP '|'

int main(void){
	int chcount = 0;
	int wdcount = 0;
	int lncount = 0;
	int inword = 0;
	int pline = 0;
	char ch;
	char prev;
	prev = '\n';
	while((ch = getchar()) != STOP)	{
		chcount ++;
		if(!isspace(ch) && !inword){
			inword = 1;	
			wdcount ++;
		}
		if(isspace(ch) && inword)
			inword = 0;
		if(ch == '\n')
			lncount ++;
		prev = ch;
	}
	if(prev != '\n')
		pline = 1;
	printf("chcount = %d\nwdcont = %d\nlncount = %d\n",chcount,wdcount,lncount);
	printf("partial lines = %d\n",pline);
	return 0;
}
