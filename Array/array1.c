/*
	created by yangyong,Nov 5,2016
	function:反向输出有5个元素的int数组中各元素的值。
*/
#include <stdio.h>

void reverse_print_array(int *arr,int length){
	int i = 0;
	for(i=length-1;i>=0;--i){
		printf("%d ",arr[i]);
	}
}

// test case
int main(int argc, char const *argv[])
{
	int arr[5] = {1,2,3,4,5};
	reverse_print_array(arr,sizeof(arr)/sizeof(int));

	return 0;
}