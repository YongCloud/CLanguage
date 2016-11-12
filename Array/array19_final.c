/*
	created by yangyong,Nov 12,2016
	function:数组拓展题19最终版
*/
#include <stdio.h>
#include <stdlib.h>
#define N 100

// 求数组中元素的最小值
int get_min(int *arr,int size){
	int i = 0;
	int min = arr[0];
	for(i=1;i<size;i++){
		if(arr[i]<min){
			min = arr[i];
		}
	}
	return min;
}

// 编号
void identify(int *arr,int size){
	int i = 0;
	int min = 0;
	int seq = 0;
	// 获取最小值
	min = get_min(arr,size);

	for(i=0;i<size;i++){
		seq = arr[i] - min + 1;
		printf("%d ",seq);
	}
	printf("\n");
}

// 打印数组
void print_array(int *arr,int size){
	int i = 0;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[]){
	int i = 0;
	int size;
	int A[N];
	printf("please input the size of array:");
	scanf("%d",&size);
	// 数组大小合法性检验
	if(size<=0 || size >100){
		printf("size is illegal...\n");
		return 1;
	}

	printf("please input array:");
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}

	printf("array A:\n");
	print_array(A,size);
	printf("identified:\n");
	identify(A,size);

	return 0;
}
