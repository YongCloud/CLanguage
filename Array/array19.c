/*
	created by yangyong,Nov 12,2016
	function:数组拓展题19
*/
#include <stdio.h>
#include <stdlib.h>
#define N 100

// 在区间[begin,end]内对key进行二分查找
int binary_search(int begin,int end,int key){
	int i = 0;
	int low = begin;
	int high = end;
	int mid = 0;
	while(low<=high){
		mid = (low+high)/2;
		if(mid == key){
			// key found
			return mid;
		}else if(mid<key){
			low = mid + 1;
		}else{
			high = mid -1;
		}
	}
	// key not found
	return -(low+1);
}

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

// 求数组中元素的最大值
int get_max(int *arr,int size){
	int i = 0;
	int max = arr[0];
	for(i=1;i<size;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}

// 编号
void identify(int *arr,int size){
	int i = 0;
	int min = 0;
	int max = 0;
	int result = 0;
	int seq = 0;

	// 求查找区间
	min = get_min(arr,size);
	max = get_max(arr,size);

	for(i=0;i<size;i++){
		result = binary_search(min,max,arr[i]);
		seq = result - min + 1;
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
