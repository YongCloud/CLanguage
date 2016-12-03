#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	double input = 0;
	printf("please input a number:");
	scanf("%lf",&input);
	long output = (long)input;
	printf("%ld\n",output);
	
	return 0;
}