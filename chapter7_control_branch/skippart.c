#include<stdio.h>

int main(void){
	const float MIN = 0.0f;
	const float MAX = 100.0f;
	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;
	printf("Enter the first score(q to quit):");
	while((scanf("%f",&score)) == 1){
		if(score < MIN || score > MAX){
			printf("valid score,please retry!\n");
			continue;
		}
		printf("Accepting :%0.1f\n",score);
		min = (score < min)? score : min;
		max = (score > max)? score : max;
		n++;
		total += score;
		printf("Enter another score(q to quit):");
	}
	if(n > 0)
		printf("The average score is :%0.1f\n",total/n);
	else
		printf("Valid number of students\n");

	return 0;
}
