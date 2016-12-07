/*
	冒泡排序算法
	算法思想：每次从未排序序列中选择最大的数并让其沉底
	算法功能：按非递减规律对长度为n的序列arr[0...n-1]进行冒泡排序
*/
void bubble_sort(int *arr,int length){
	int i = 0;
	int j = 0;

	for(i=0;i<length;i++){
		for(j=0;j<length-i;j++){
			if(arr[j]>arr[j+1]){
				// 交换
				arr[j] = arr[j] ^ arr[j+1];
				arr[j+1] = arr[j] ^ arr[j+1];
				arr[j] = arr[j] ^ arr[j+1];
			}
		}
	}
}
/*
	算法分析：时间复杂度O（n^2），空间复杂度O（1）
*/

// test case
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int arr[] = {7,6,5,1,2,3,4,8,9,7};
	int length = 10;
	// 排序
	bubble_sort(arr,length);
	// 打印输出
	int i = 0;
	for(i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}