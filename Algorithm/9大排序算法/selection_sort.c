/*
	选择排序算法
	算法思想：每次从未排序序列中选择最小的数和当前位置的数替换
	算法功能：按非递减规律对长度为n的序列arr[0...n-1]进行选择排序
*/
void selection_sort(int *arr,int length){
	int i = 0;
	int min_index = 0;
	// 函数声明
	int get_min_index(int *arr,int start,int end);

	for(i=0;i<length;i++){
		min_index = get_min_index(arr,i,length);
		if(i != min_index){
			// 两个整数交换高效算法
			arr[i] = arr[i]^arr[min_index];
			arr[min_index] = arr[i]^arr[min_index];
			arr[i] = arr[i]^arr[min_index];
		}
	}
}
/*
	算法分析：时间复杂度O（n^2），空间复杂度O（2）。
*/

/*
	获取序列arr中从start（包含）到end（不包含）之间最小元素的位置索引
	对start和end，不作参数合法性检验，要求是合法的
*/
int get_min_index(int *arr,int start,int end){
	int min_index = start;
	int i = 0;

	for(i=start+1;i<end;i++){
		if(arr[min_index]>arr[i]){
			min_index = i;
		}
	}

	return min_index;
}

// test case
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int arr[] = {7,6,5,1,2,3,4,8,9,7};
	int length = 10;
	// 排序
	selection_sort(arr,length);
	// 打印输出
	int i = 0;
	for(i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}