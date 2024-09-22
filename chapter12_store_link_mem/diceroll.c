#include<stdlib.h>
#include<stdio.h>
#include "diceroll.h"

int roll_count = 0;

static int rollem(int sides){
	int roll;
	roll = rand() % sides + 1;
	roll_count++;
	return roll;
}

int roll_n_dice(int dice,int sides){
	int sum = 0;
	int d;
	if(dice < 1){
		puts("Need at least 1 dice.");
		return -1;
	}
	if(sides < 2 ){
		puts("Need at lease 2 sides.");
		return -2;
	}
	for(d= 0;d < dice;d++){
		sum += rollem(sides);
	}
	return sum;
}
