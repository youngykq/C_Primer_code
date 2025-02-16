#include<stdio.h>
#define PI 14.5833
int main(void){
	float weight;
	float value;
	printf("Enter your weight:");
	scanf("%f",&weight);
	value = 1700.0 * weight * PI;
	printf("your value is %f\n",value);

	return 0;
}
