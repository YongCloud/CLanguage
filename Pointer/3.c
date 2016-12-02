/*
	created by yangyong,Dec 2,2016
	function:教材第8章 习题3
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
	int arr[10];
	int length = sizeof(arr)/sizeof(arr[0]);

	void input_array(int *arr,int length);
	void deal(int *arr,int length);
	void print_array(int *arr,int length);

	printf("please input 10 integers:\n");
	input_array(arr,length);
	deal(arr,length);
	printf("the result is:\n");
	print_array(arr,length);

	return 0;
}



void deal(int *arr,int length){
	int max_index = 0;
	int min_index = 0;
	
	int get_max_index(int *arr,int length);
	int get_min_index(int *arr,int length);
	void swap(int *a,int *b);

	max_index = get_max_index(arr,length);
	min_index = get_min_index(arr,length);
	swap(arr,arr+min_index);
	swap(arr+max_index,arr+length-1);
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

// 获取数组元素的最大值
int get_max_index(int *arr,int length){
	int index = 0;
	int i = 0;
	for(i=1;i<length;i++){
		if(*(arr+index) < *(arr+i)){
			index = i;
		}
	}
	return index;
}

// 获取数组元素的最小值
int get_min_index(int *arr,int length){
	int index = 0;
	int i = 0;
	for(i=1;i<length;i++){
		if(*(arr+index) > *(arr+i)){
			index = i;
		}
	}
	return index;
}

// 交互2个整数
void swap(int *a,int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}