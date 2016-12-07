/*
	快速排序算法
	算法思想：分治策略
*/

void quick_sort(int *arr,int low,int high){
	if(low<high){
		int partition(int *arr,int low,int high);
		int mid = partition(arr,low,high);
		quick_sort(arr,low,mid-1);
		quick_sort(arr,mid,high);
	}
}

void exchange(int *arr,int i,int j);
int partition(int *arr,int low,int high){
	int x = arr[high];
	int i = low-1;
	int j = 0;
	for(j = low;j<=high-1;j++){
		if(arr[j]<=x){
			i = i+1;
			exchange(arr,i,j);
		}
	}
	exchange(arr,i+1,high);
	return i+1;
}

void exchange(int *arr,int i,int j){
	arr[i] = arr[i]^arr[j];
	arr[j] = arr[i]^arr[j];
	arr[i] = arr[i]^arr[j];
}

// test case
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int arr[] = {7,6,5,1,2,3,4,8,9,7};
	int length = 10;
	// 排序
	quick_sort(arr,1,length-1);
	// 打印输出
	int i = 0;
	for(i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}