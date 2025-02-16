#include<stdio.h>
#include<stdlib.h>

int main(void){
	double*ptr;
	int max;
	int i = 0;
	puts("Enter the max count of array:");
	if(scanf("%d",&max) != 1){
		puts("Entered error");
		exit(EXIT_FAILURE);
	}
	ptr = (double*)malloc(max * sizeof(double));
	if(ptr == NULL){
		puts("Failed to allocate the memory scope.");
		exit(EXIT_FAILURE);
	}
	puts("Now enter the elements of the array:");
	while(i < max && scanf("%lf",&ptr[i]) == 1 ){
		i++;
	}

	puts("Here are the elements of array:");
	for(int j = 0;j < max;j++){
		printf("%lf\n",ptr[j]);
	}

	puts("Done!");
	free(ptr);

	return 0;
}
