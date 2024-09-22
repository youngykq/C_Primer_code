#include<stdio.h>
#include<stdlib.h>

int main(void){
	int max;
	int number;
	int i = 0;
	puts("What is the max number of the entries:");
	if(!scanf("%d",&max)){
		puts("The wrong input!");
		exit(EXIT_FAILURE);	
	}
	double *ptd = (double *)malloc(max * sizeof(double));
	if(ptd == NULL){
		puts("Menory allocation failed!");
		exit(EXIT_FAILURE);
	}
	puts("Please input the value (q to quit):");
	while(i < max && (scanf("%lf",&ptd[i]) == 1))
		i++;
	printf("Here are the %d value which you has inputed:",number = i);
	for(int j = 0;j < number;j++){
		printf("%7.2f",ptd[j]);
		if(j % 7 == 6)
			putchar('\n');
	}
	if(i % 7 != 0)
		putchar('\n');
	puts("Done.");	
	free(ptd);


	return 0;
}
