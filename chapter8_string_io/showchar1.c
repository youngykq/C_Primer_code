#include<stdio.h>

void display(char c,int a,int b);
int main(void){
	char ch;
	int row,col;
	printf("Please input a character,a row,a colume:");
	while((ch = getchar()) != '\n'){
		if((scanf("%d" "%d",&row,&col)) == 2)
			display(ch,row,col);
		else
			break;
		while(getchar() != '\n')
			continue;
		printf("You can continue to input:");
	}
	return 0;
}

void display(char c,int row,int col){
	for(int i = 0;i < row;i++){
		for(int j = 0;j < col;j++)
			putchar(c);
		putchar('\n');
	}
}


