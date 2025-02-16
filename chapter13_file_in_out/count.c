#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
	unsigned count = 0;
	FILE* fp;
	char ch;
	if(argc != 2){
		puts("usage: ./count filename");
		exit(EXIT_FAILURE);
	}
	if((fp = fopen(argv[1],"r")) == NULL){
		printf("Can't open %s.\n",argv[1]);
		exit(EXIT_FAILURE);
	}
	while((ch = getc(fp)) != EOF){
		putc(ch,stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %d characters\n",argv[1],count);

	return 0;
}
