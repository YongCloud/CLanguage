/*
	杨勇 2016/10/20
	功能：编写一个函数，完成2个整数的除法运算，不要使用除法运算符。
*/
#define BY_ZERO -1

int divide(int dividend,int divisor){
	if(divisor == 0){
		return BY_ZERO;
	}

	short flag = 1;
	if(dividend<0){
		dividend = -dividend;
		flag = -flag;
	}
	if(divisor<0){
		divisor = -divisor;
		flag = -flag;
	}
	if(dividend<divisor){
		return 0;
	}

	int minus = dividend - divisor;
	int count = 1;
	while(minus>=divisor){
		minus -= divisor;
		count++;
	}
	return count*flag;
}

// test case
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	printf("Please input dividend and divisor,ex:32 4:");

	int dividend,divisor;
	scanf("%d %d",&dividend,&divisor);
	printf("the computing result is %d\n",divide(dividend,divisor));

	getchar();
	return 0;
}