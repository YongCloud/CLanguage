#include<stdio.h>
void main()
{
	int year,leap;
	scanf("%d",&year);
	if((year%4==0 && year%100!==0) || (year%400==0))
		leap=1;
	else
		leap=0;
	if(leap)
		printf("%d is a leap year\n",year);
	else
		printf("%d is not a leap year\n",year);
}

