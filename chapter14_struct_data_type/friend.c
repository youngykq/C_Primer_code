#include<stdio.h>
#define LEN 20

const char* msgs[5] = {
	"Hello!",
	"hhaa",
	"happy",
	"learning",
	"English"
};
struct name{
	char first[LEN];
	char last[LEN];
};
struct guy{
	struct name handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main(void){
	struct guy fellow[2] = {
		{
			{"kaiqiang","yang"},
			"fish",
			"teller",
			12000.00
		},
		{
			{"jianhua","fang"},
			"tomato",
			"clerk",
			16000.00
		}
	};
	struct guy* him;
	printf("The address 1#is :%p\n",&fellow[0]);
	printf("The address 2#is :%p\n",&fellow[1]);
	him = &fellow[0];
	printf("pointer #1 %p #2: %p\n",him,him + 1);
	printf("him->income is %.2f: (*him).income is %.2f:\n",him->income,(*him).income);
	him++;
	printf("him->favfood is :%s him->handle.last is %s\n",him->favfood,him->handle.last);
	return 0;
}

