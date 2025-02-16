#include<stdio.h>

char get_choice(void);
void count(void);
char get_first(void);
int get_int(void);

int main(void){
	int choice;
	while((choice = get_choice()) != 'q'){
		switch(choice){
			case 'a':
				printf("Buy low,sell high.\n");
				break;
			case 'b':
				putchar('\a');
				break;
			case 'c':
				count();
				break;
			default:
				printf("Program error！\n");
				break;
		}
	}
	printf("Bye!\n");
	return 0;
}

char get_choice(void){
	int choice;
	printf("a. advice	b. bell\n");
	printf("c. count	q. quit\n");
	printf("Enter the letter of your choice:");
	choice = get_first();
	while((choice < 'a' || choice > 'c') && choice != 'q'){
		printf("Please choose a choice:");
		choice = get_first();
	}
	return choice;

}

char get_first(void){
	int ch;
	if((ch = getchar()) == '\n')	
		ch = getchar();
	else
		;
	while((getchar()) != '\n')
		continue;
	return ch;
}

void count(void){
	int n,i;
	printf("Count how far?Enter an integer:");
	n = get_int();
	for(i = 1;i <= n;i++)
		printf("%d\n",i);

}

int get_int(void){
	int a;
	char ch;
	while((scanf("%d",&a)) != 1){
		printf("You just input a wrong number:");
		while((ch = getchar()) != '\n'){
			putchar(ch);
			putchar('\n');
		}
		printf("Please input a number like: -4,87,122...:");
	}
	return a;
}
