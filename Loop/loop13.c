/*
	created by yangyong,Nov 8,2016
	function:循环结构第13题
*/
#include <stdio.h>
#include <conio.h>

void print_metrix(int n){
	if(n<=0){
		return;
	}
	// 记录1的个数
	int ones = 0;
	int i = 0;
	int j = 0;

	for(i=0;i<n;i++){
		// 打印1
		for(j=0;j<ones;j++){
			printf("1\t");
		}
		// 打印其他数字
		for(j=1;j<=n-ones;j++){
			printf("%d\t",j);
		}
		// 打印换行
		printf("\n");
		ones++;
	}
}

// test case
int main(int argc, char const *argv[]){
	int n;

	printf("please input a integer:");
	scanf("%d",&n);
	print_metrix(n);
	printf("please press any key to exit...\n");
	getchar();

	return 0;
}