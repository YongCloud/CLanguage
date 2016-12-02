/*
	created by yangyong,Dec 2,2016
	function:教材第8章 习题4
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
	int size = 0;
	int *arr = NULL;
	int m = 0;

	int *allocate_memory(int size);
	void input_array(int *arr,int length);
	void rotate_array(int *arr,int size,int m);
	void print_array(int *arr,int length);

	printf("please input the number of integer:\n");
	scanf("%d",&size);
	if(size<=0){
		printf("the number %d is illegal...\n",size);
		return 1;
	}

	arr = allocate_memory(size);
	if(!arr){
		printf("allocated memory unsuccessfully...\n");
		return 2;
	}

	printf("please input %d integers:\n",size);
	input_array(arr,size);

	printf("please input m :\n");
	scanf("%d",&m);
	if(m < 0 || m > size){
		printf("input is illegal...\n");
		return 3;
	}

	rotate_array(arr,size,m);

	print_array(arr,size);

	// 释放内存，非常重要，否则你就等着内存泄漏吧！
	free(arr);

	return 0;
}

// 动态分配size个整数存储空间
int *allocate_memory(int size){
	int *res = NULL;
	res = (int *)malloc(size*sizeof(int));
	return res;
}

// 输入数组
void input_array(int *arr,int length){
	int i = 0;
	for(i=0;i<length;i++){
		scanf("%d",arr+i);
	}
}

// 打印数组
void print_array(int *arr,int length){
	int i = 0;
	for(i=0;i<length;i++){
		printf("%d ",*(arr+i));
	}
}

// 将数组后m元素旋转到开始位置
void rotate_array(int *arr,int size,int m){
	void reverse(int *arr,int start,int end);

	reverse(arr,0,m);
	reverse(arr,m,size);
	reverse(arr,0,size);
}

// 将数组中位于start(inclusive)和end(exclusive)位置之间的元素逆置
void reverse(int *arr,int start,int end){
	int i = 0;
	int j = 0;
	
	void swap(int *a,int *b);

	for(i=start,j=end-1;i<j;i++,j--){
		swap(arr+i,arr+j);
	}
}

// 交换2个整数
void swap(int *a,int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}