/*
	created by yangyong,Nov 8,2016
	function:循环结构第9题
*/
#include <stdio.h>
#include <conio.h>

void print_triangle(int n){
	if(n<=0){
		return;
	}
	
	int i = 0;
	int j = 0;

	for(i=1;i<=n;i++){
		// 打印空格
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		// 打印星号
		for(j=0;j<2*i-1;j++){
			printf("*");
		}
		// 打印换行
		printf("\n");
	}
}

// test case
int main(int argc, char const *argv[]){
	int n;

	printf("please input a integer:");
	scanf("%d",&n);
	print_triangle(n);
	printf("please press any key to exit...\n");
	getchar();

	return 0;
}