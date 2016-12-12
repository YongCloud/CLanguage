/*
	created by yangyong,Dec 12,2016
	function:判断一个整数的奇偶性
*/
#include <stdio.h>
#include <stdbool.h> // 此头文件中包含bool定义

int main(int argc, char const *argv[]){
	int a = 0;
	printf("please input a integer:");
	scanf("%d",&a);
	bool is_odd(int n);
	
	if(is_odd(a)){
		printf("%d is odd\n",a);
	}else{
		printf("%d is not odd\n",a);
	}

	return 0;
}

// 判断一个整数是不是奇数
bool is_odd(int n){
	return n&1;
}