#include<stdio.h>
#include<string.h>
typedef unsigned char* byte_pointer;

void show_byte(byte_pointer start,size_t len);//将输入的数据，按字节依次输出
void show_int(int byte);
void show_float(float byte);
void show_pointer(void*);
int main(void){
	int num = 12345;
	int* pnum = &num;
	char str[] = "abcdef";
	show_byte((byte_pointer)str,strlen(str));
	show_int(num);
	show_float(num);
	show_pointer(pnum);
	return 0;
}

void show_byte(byte_pointer start,size_t len){
	for(int i = 0;i < len;i++){
		printf("%.2x ",start[i]);
	}
	printf("\n");

}

void show_int(int byte){
	printf("This is a int date output:");
	show_byte((byte_pointer)&byte,sizeof(int));
}

void show_float(float byte){
	printf("This is a float date output:");
	show_byte((byte_pointer)&byte,sizeof(float));

}

void show_pointer(void* byte){
	printf("This is a pointer date output:");
	show_byte((byte_pointer)&byte,sizeof(void*));

}






