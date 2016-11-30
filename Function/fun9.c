/*
	created by yangyong,Nov 24,2016
	function:编写一个使用指针的C函数，交换数组a和数组b中的对应元素。
*/
#include <stdio.h>

// 一维数组的情况
void swap_array_elem(int *a,int *b,int a_size,int b_size){
	int count = a_size<b_size?a_size:b_size;
	int i = 0;
	for(i=0;i<count;i++){
		*(a+i) = *(a+i) ^ *(b+i);
		*(b+i) = *(a+i) ^ *(b+i);
		*(a+i) = *(a+i) ^ *(b+i);
	}
}

void print_array(int *arr,int size){
	int i = 0;
	for(i=0;i<size;i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
}

// test case
int main(int argc, char const *argv[]){
	int a[] = {1,2,3};
	int b[] = {4,5,6,7};
	// calcute the size of array
	int a_size = sizeof(a)/sizeof(a[0]);
	int b_size = sizeof(b)/sizeof(b[0]);

	printf("before swapping:\n");
	printf("array a:");
	print_array(a,a_size);
	printf("array b:");
	print_array(b,b_size);
	
	swap_array_elem(a,b,a_size,b_size);

	printf("after swapping:\n");
	printf("array a:");
	print_array(a,a_size);
	printf("array b:");
	print_array(b,b_size);

	return 0;
}