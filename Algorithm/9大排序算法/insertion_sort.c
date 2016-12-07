/*
	插入排序算法
	算法思想类似于玩扑克牌时对扑克牌的排序
	算法功能：按非递减规律对长度为n的序列arr[0...n-1]进行插入排序
*/
void insertion_sort(int *arr,int length){
	int i = 0;
	int key = 0;
	int j = 0;

	for(i=1;i<length;i++){
		key = arr[i];
		// Insert arr[i] into the sorted sequence arr[0,i-1].
		j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
/*
	算法分析：时间复杂度O（n^2），空间复杂度O（1）。
*/

// test case
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int arr[] = {7,6,5,1,2,3,4,8,9,7};
	int length = 10;
	// 排序
	insertion_sort(arr,length);
	// 打印输出
	int i = 0;
	for(i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}