/*
	created by yangyong,Nov 16,2016
	function:delete the same element int a sorted array.
*/
#include <stdio.h>

/*
	数组arr中的元素按照递增有序排列，删除其中相同的元素，
	返回删除相同元素的后数组的有效长度。
*/

int delete_same_element(int *arr,int length){
	int i = 0;
	int j = 0;
	int k = 0;
	for(i=0;i<length-1;i++){
		for(j=i+1;j<length;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<length-1;k++){
					arr[k] = arr[k+1];
				}
				length--;
				j--;
			}
		}
	}

	return length;
}

// 打印数组
void print_array(int *arr,int size){
	int i = 0;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

// test code
int main(int argc, char const *argv[]){
	int arr1[] = {1,1,2,3,4,5,6,7,7,8,9,10};

	int length = sizeof(arr1)/sizeof(int);
	printf("before deleting same element\n");
	print_array(arr1,length);
	int len = delete_same_element(arr1,length);
	printf("after deleting same element\n");
	print_array(arr1,len);

	int arr2[] = {-1,-1,-2,-3,0,2,2,4,5,6,7,8,9,10,10};
	
	length = sizeof(arr2)/sizeof(int);
	printf("before deleting same element\n");
	print_array(arr2,length);
	len = delete_same_element(arr2,length);
	printf("after deleting same element\n");
	print_array(arr2,len);

	return 0;
}