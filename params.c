#include <stdio.h>
#include <stdarg.h>

int sum(int n,...){
	int sum = 0 ;
	va_list args;
	va_start(args,n);
	int i = 0;
	for(i=0;i<n;i++){
		sum += va_arg(args,int);
	}
	va_end(args);
	return sum;
}
int main(int argc, char const *argv[])
{
	printf("%d\n",sum(3,1,2,3));
	return 0;
}