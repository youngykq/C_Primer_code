#include<stdio.h>
#include<string.h>
char* s_gets(char* str,int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
int main(void){
	int count = 0;
	struct book library[MAXBKS];
	puts("Enter the title of book you want,press the key \"enter\" to quit.");
	while(count < MAXBKS && s_gets(library[count].title,MAXTITL) != NULL && library[count].title[0] != '\0'){
		puts("Now enter the author of the book:");
		s_gets(library[count].author,MAXAUTL);
		puts("Now enter the value of book:");
		scanf("%f",&library[count++].value);
		while(getchar() != '\n')
			continue;
		if(count < MAXBKS)
			puts("Now enter another title:");
	}
	if(count > 0){
		puts("Below is the list of library:");
		for(int i = 0;i < count;i++){
			printf("The book name:%s written by %s cost %f\n",library[i].title,library[i].author,library[i].value);
		}
	}
	return 0;
}
char* s_gets(char* str,int n){
	char* ret_val;
	char* find;
	ret_val = fgets(str,n,stdin);
	if(ret_val){
		find = strchr(str,'\n');
		if(find){
			*find = '\0';
		}else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}


