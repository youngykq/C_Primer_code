#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	int i,time;
	if(argc < 2 || (time = atoi(argv[1])) < 1){
		puts("Usage:%s positive number");
	}else{
		for(i = 0;i < time;i++)
			puts("Happy New Year!");		
	
	}

	return 0;
}
