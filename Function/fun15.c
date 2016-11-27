/*
	created by yangyong,Nov 26,2016
	function:产生动态数组。编写程序，输入数组大小后，通过动态分配内存函数malloc产生数组。
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 动态申请size个int类型的存储空间
int *allocate(int size){
	int *arr = (int *)malloc(size*sizeof(int));
	if(arr){
		return arr;
	}else{
		return NULL;
	}
}

// 释放存储空间
void free_memory(int *arr){
	free(arr);
}

// 使用随机数填充数组
void rand_array(int *arr,int size){
	const int MAX = 100;
	const int MIN = 0;
	int i = 0;
	srand((unsigned)time(NULL));
	for(i=0;i<size;i++){
		*(arr+i) = MIN+rand()%(MAX-MIN+1);
	}
}

// 打印数组
void print_array(int *arr,int size){
	int i = 0;
	for(i=0;i<size;i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
}

// test case
int main(int argc, char const *argv[]){
	int *arr = NULL;
	int size;

	printf("please input the size of array:");
	scanf("%d",&size);

	arr = allocate(size);
	if(!arr){
		printf("allocated memory unsuccessfully...\n");
		return 1;
	}else{
		printf("allocated memory successfully...\n");

		rand_array(arr,size);

		printf("the array that generated randomly is :\n");
		print_array(arr,size);

		free_memory(arr);
	}

	return 0;
}