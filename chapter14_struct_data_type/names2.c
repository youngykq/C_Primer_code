#include<stdio.h>
#include<string.h>
#define NLEN 30

struct namect{
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};
struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);
char* s_gets(char* str,int len);
int main(void){
	struct namect person;
	person = getinfo();
	person = makeinfo(person);
	showinfo(person);
	return 0;
}
struct namect getinfo(void){
	struct namect temp;
	puts("Enter your first name:");
	s_gets(temp.fname,NLEN);
	puts("Enter your last name:");
	s_gets(temp.lname,NLEN);
	return temp;
}
struct namect makeinfo(struct namect temp){
	temp.letters = strlen(temp.fname) + strlen(temp.lname);
	return temp;
}
void showinfo(struct namect temp){
	printf("The first name %s the last name %s and the letters are %d\n",temp.fname,temp.lname,temp.letters);
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
