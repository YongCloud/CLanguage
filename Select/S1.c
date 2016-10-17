/*
	计科132 19213210 杨勇 2016/10/17 21:15
	功能：编程判断输入整数x的正负性和奇偶性
*/
#include <stdio.h>
// 解法一、普普通通的方法
/*
void isodd(int n){
	if(n%2 != 0){
		printf("%d is odd.\n",n);
	}else{
		printf("%d is not odd.\n",n);;
	}
}
*/

// 解法二、秒杀级别的算法
// 使用位运算符
void isodd(int n){
	if(n&1 != 0){
		printf("%d is odd.\n",n);
	}else{
		printf("%d is not odd.\n",n);;
	}
}

// test case
int main(int argc, char const *argv[])
{
	/* code */
	isodd(0);
	isodd(1);
	isodd(2);

	return 0;
}