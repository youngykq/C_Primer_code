#include<stdio.h>

void report_count();
void accumulate(int k);
int count = 0;	//文件作用域，外部链接

int main(void){

	int value; //自动变量
	register int i;	//寄存器变量
	fputs("Enter a positive integer(0 to quit):",stdout);
	while(scanf("%d",&value) == 1 && value > 0){
		count ++;
		for(i = value;i >= 0;i--){
			accumulate(i);
		}
	fputs("Enter a positive integer(0 to quit):",stdout);
	}
	report_count();
	return 0;
}

void report_count(){
	printf("Loop executed %d times\n",count);
}
