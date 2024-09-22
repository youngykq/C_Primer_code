#include<stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void){
	float sum_year,sub_year,sum_month;
	const float rain[YEARS][MONTHS] = {
		{12.3,14.5,56.1,23.1,23.6,34.6,45.6,34.6,55.7,66.8,88.7,77.8},
		{44.4,66.6,21.3,77.,56.7,12.3,22.4,55.6,23.7,81.5,23.5,26.6},
		{12.4,16.8,54.6,55.4,87.7,23.4,45.6,45.6,23.1,90.1,87.3,88.2},
		{17.1,15.3,19.4,98.4,76.5,23.4,76.1,45.1,44.2,43.1,76.1,23.5},
		{76.3,65.3,23.1,32.1,32.6,13.1,15.1,17.1,34.5,87.1,77.5,34.5}
	};

	int i,j;
	for(i = 0,sum_year = 0;i < YEARS;i++){
		for(j = 0,sub_year = 0;j < MONTHS;j++)
			sub_year += rain[i][j];
		printf("第%d年的降水总量是:%.2f\n",i+1,sub_year);
		sum_year += sub_year;
	}
	printf("年平均降水总量是:%.2f\n",sum_year/YEARS);
	
	for(j = 0;j < MONTHS;j++){
		for(i = 0,sum_month = 0;i < YEARS;i++){
			sum_month += rain[i][j];
		}
		printf("%d月的平均降水量为:%.2f\n",j+1,sum_month/YEARS);
	
	}


	return 0;
}
