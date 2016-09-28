#include<stdio.h>

int main(){
	int a = 0;
	printf("Please input a number:");
	// scanf()函数返回读入了多少个数据
	int in = scanf("%d",&a);
	printf("%d\n",in);

	// printf()函数返回向标准输出设备输出的字符数
	int out = printf("Hello,World!\n");
	// out = 13
	printf("%d\n",out);
	return 0;
}
