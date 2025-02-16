#include<stdio.h>
#include<stdbool.h>

long get_long(void);
bool bad_limits(long begin,long end,long low,long high);
double sum_squares(long a,long b);

int main(void){
	const long MIN = -10000000L;
	const long MAX = +10000000L;
	long start,stop;
	double answer = 0;
	start = get_long();
	stop = get_long();
	while(start != 0 ||stop != 0){
		if(bad_limits(start,stop,MIN,MAX))
			printf("Wrong!\n");
		else
			answer = sum_squares(start,stop);
		printf("answer is %lf\n",answer);
		printf("Loer limit:");
		start = get_long();
		printf("Upper limit:");
		stop = get_long();
	}
	printf("Done\n");
	return 0;
}

long get_long(void){
	long val;
	char ch;
	while((scanf("%ld",&val)) != 1){
		printf("You just input a worng number:");
		while((ch = getchar()) != '\n'){
			putchar(ch);
			putchar('\n');
		}
		printf("Please input a number like:-4,65,77...\n");
	}
	return val;
}


bool bad_limits(long begin,long end,long low,long high){
	bool not_good = false;
	if(begin > end){
		printf("%ld isn't smaller than %ld\n",begin,end);
		not_good = true;
	}
	if(begin < low || end < low){
		printf("Values must be %ld or greater.\n",low);
		not_good = true;
	}
	if(begin > high || end > high){
		printf("Values must be %ld or less.\n",high);
		not_good = true;
	}
	return not_good;
}


double sum_squares(long a,long b){
	double sum = 0.0;
	for(long i = a;i <= b;i++){
		sum += (double)i*(double)i;
	}
	return sum;
}



