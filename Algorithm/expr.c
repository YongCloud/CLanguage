#include <stdio.h>

int main(int argv,char* argc[]){
	int a,b,result;
	char op;

	scanf("%d %c %d",&a,&op,&b);
	switch(op){
		case '+':
			result = a+b;
			break;
		case '-':
			result = a-b;
			break;
		default:
			result = a*b;
	}
	printf("%d\n", result);
	return 0;
}