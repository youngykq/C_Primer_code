#include<stdio.h>
#include<string.h>
#define LISTSIZE 6

int main(void){	
	const char* list[LISTSIZE] = {
		"astroney",
		"astrojkjlk",
		"astriljjads",
		"astrqgfdsg",
		"astroiuiuiu",
		"astrokjkjkj",
	};

	int count = 0;
	int i;
	for(i = 0; i < LISTSIZE;i++){
		if(strncmp(list[i],"astro",5) == 0){
			printf("found %s\n",list[i]);
			count++;
		}
	}
	printf("Total strings contain \"astro\" are %d\n",count);

	return 0;
}
