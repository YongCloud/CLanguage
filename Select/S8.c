/*
	created by yangyong,Nov 8,2016
	function:输入10个整数，求其中正数的个数及平均值,精确到小数点后两位。
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
	int in = 0;
	int sum = 0;
	int count = 10;
	int num = 0;

	int i = 0;
	printf("please input 10 integers:");
	for (i = 0; i < count; ++i){
		scanf("%d",&in);
		if(in>0){
			num++;
			sum += in;
		}
	}

	printf("the positive number is %d,the average is %.2f\n",num,(float)sum/num);

	return 0;
}