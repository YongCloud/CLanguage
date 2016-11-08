/*
	created by yangyong,Nov 8,2016
	function:编写程序,输入三角型的三条边长，求其面积。注意：对于不合理的边长输入要输出数据错误的提示信息。
*/
#include <math.h>

int is_triangle(int a,int b,int c){
	if(a<=0 || b<=0 || c<=0){
		return 0;
	}
	return (a+b)>c && (a+c)>b && (b+c)>a;
}

float get_area(int a,int b,int c){
	float p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

// test case
#include <stdio.h>

int main(int argc, char const *argv[]){
	int a,b,c;

	printf("please input three integers:");
	scanf("%d %d %d",&a,&b,&c);

	if(!is_triangle(a,b,c)){
		printf("these numbers can not build a triangle.\n");
		return 1;
	}
	printf("the triangle area is %f\n",get_area(a,b,c));

	return 0;
}