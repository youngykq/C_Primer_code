#include<stdio.h>
#include<string.h>
#define NLEN 30

struct namect{
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};
void getinfo(struct namect*);
void makeinfo(struct namect*);
void showinfo(const struct namect*);
char* s_gets(char* str,int len);
int main(void){
	struct namect person;
	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	return 0;
}
void getinfo(struct namect* pname){
	puts("Enter your first name:");
	s_gets(pname -> fname,NLEN);
	puts("Enter your last name:");
	s_gets(pname -> lname,NLEN);
}
void makeinfo(struct namect* pname){
	pname -> letters = strlen(pname -> fname) + strlen(pname -> lname);
}
void showinfo(const struct namect* pname){
	printf("The first name %s the last name %s and the letters are %d\n",pname -> fname,pname -> lname,pname -> letters);
}

char*s_gets(char* str,int len){
	char*ret_val;
	char* find;
	ret_val = fgets(str,len,stdin);
	if(ret_val){
		find = strchr(str,'\n');
		if(find)
			*find= '\0';
		else
			while(getchar() != '\n')
			      continue;	
	}
	return ret_val;
}
