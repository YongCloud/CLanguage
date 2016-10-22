/*
	杨勇 2016/10/22
	功能：C语言数组的那些坑
*/

#include <stdio.h>

int get_array_size(int *arr){
	return sizeof(arr)/sizeof(int);
}

int main(int argc, char const *argv[])
{
	int arr[10];
	// 以下输出语句输出结果是啥？
	printf("%d\n", sizeof(arr)/sizeof(int));

	printf("%d\n",get_array_size(arr));
	
	printf("%d\n",arr[10]);
	printf("%d\n",arr[11]);
	printf("%d\n",arr[12]);

	printf("%d\n",get_array_size(arr));

	return 0;
}