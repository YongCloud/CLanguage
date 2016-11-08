/*
	created by yangyong,Nov 8,2016
	function：已知一个首项大于0的等差数列的前四项和为26，前四项的积为880，求此数列。
*/

#include <stdio.h>

int main(int argc, char const *argv[]){
	int a = 0;
	int d = 0;
	int times = 0;

	for(a=1;a<7;a++){
		for(d=0;d<5;d++){
			times = a*(a+d)*(a+2*d)*(a+3*d);
			if(880 == times){
				printf("首项是：%d,公差是：%d\n",a,d);
				return 0;
			}
		}
	}

	printf("对不起，此数列不存在！\n");

	return 0;
}
