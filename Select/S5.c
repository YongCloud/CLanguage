/*
	计科132 19213210 杨勇 2016/10/18
	功能：输入年份year和月month，求该月有多少天。
*/
#include <stdio.h>

short days(short year,short month){
	short months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if((year%4 == 0 && year%100 !=0) || year%400 == 0){
		if(month == 2){
			return months[month-1] + 1;
		}
		return months[month-1];
	}
	return months[month-1];
}

// test case
int main(int argc, char const *argv[])
{
	/* code */
	printf("please input year and month:");

	short year,month;
	scanf("%d %d",&year,&month);
	if(month<1 || month>12){
		printf("your input is wrong...\n");
		return 1;
	}
	printf("days are %d\n", days(year,month));

	return 0;
}