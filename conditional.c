#include<stdio.h>

int conditional(int x,int y,int z);
int main(void){
	int x,y,z;
	while(1){
		scanf("%d %d %d",&x,&y,&z);
		printf("%d\n",conditional(x,y,z));
	}
	return 0;
}

int conditional(int x,int y,int z){
	return ((!x-1)&y)|((~!x+1)&z);

