#include<stdio.h>
int units = 0;
void critic(int *price);

int main(void){
	extern int units;	/*option*/
	int price;
	puts("How many pounds to a firkin of butter?");
	scanf("%d",&price);
	while(price != 56)
		critic(&price);
	puts("You must have looked it up!");
	return 0;
}

void critic(int *price){
	puts("No luck,my friend.Try again.");
	scanf("%d",price);
}
