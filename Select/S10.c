/*
	计科132 19213210 杨勇 2016/10/18
	功能：输入a、b、c、d四个整数，求最小值min和最大值max。
*/
// 求2个整数中的最小值
int min(int a,int b){
	return a<b?a:b;
}

// 求2个整数中的最大值
int max(int a,int b){
	return a>b?a:b;
}

#include <stdio.h>
// test case
int main(int argc, char const *argv[])
{
	/* code */
	printf("please input 4 integer numbers:");

	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	printf("the min value is %d\n",min(min(min(a,b),c),d));
	printf("the max value is %d\n",max(max(max(a,b),c),d));

	return 0;
}