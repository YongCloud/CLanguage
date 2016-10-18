/*
	计科132 19213210 杨勇 2016/10/18
	功能：选择结构第2题
*/
#include <stdio.h>
void accounting(double balance,short year){
	double interest = 0.0;
	switch(year){
		case 1:interest = balance*0.63*0.01*12;balance += interest;break;
		case 2:interest = balance*0.66*0.01*12*2;balance += interest;break;
		case 3:interest = balance*0.69*0.01*12*3;balance += interest;break;
		case 5:interest = balance*0.75*0.01*12*5;balance += interest;break;
		case 8:interest = balance*0.84*0.01*12*8;balance += interest;break;
		default:printf("your input is wrong...\n");return;break;
	}
	printf("your balance is %lf\n",balance);
}

// test case
int main(int argc, char const *argv[])
{
	/* code */
	printf("please input balance and year:");

	double balance = 0.0;
	short year = 0;
	scanf("%lf %d",&balance,&year);
	accounting(balance,year);

	return 0;
}