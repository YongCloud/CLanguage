/*
	created by yangyong,Dec 2,2016
	function:输入3个整数，按由小到大的顺序输出。
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
	int a,b,c;
	printf("please input 3 integers:\n");
	scanf("%d %d %d",&a,&b,&c);

	void swap(int *a,int *b);
	
	if(a>b){
		swap(&a,&b);
	}

	if(b>c){
		swap(&b,&c);
	}

	if(a>b){
		swap(&a,&b);
	}

	printf("the result is :%d %d %d\n",a,b,c);

	return 0;
}

// 交互2个整数
void swap(int *a,int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
