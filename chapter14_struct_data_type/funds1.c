#include<stdio.h>
#define FUNDLEN 50

struct funds{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(double,double);

int main(void){
	struct funds stan = {
		"nongye yinghang",
		45678.23,
		"jianshe yinghang",
		66666.65
	};
	printf("The sum of money is %lf\n",sum(stan.bankfund,stan.savefund));
	return 0;
}

double sum(double x,double y){
	return (x + y);
}
