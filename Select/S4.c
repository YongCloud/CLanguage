/*
	计科132 19213210 杨勇 2016/10/17 21:35
	功能：简单计算器。请编写一个程序计算表达式：datal  op  data2的值。其中op为运算符+、—、*、／。
*/
#include <stdio.h>
#include <conio.h>

void calculate(int data1,char op,int data2){
	int result = 0;
	switch(op){
		case '+':result = data1+data2;break;
		case '-':result = data1-data2;break;
		case '*':result = data1*data2;break;
		case '/':if(data2 == 0){
			printf("输入有误，除数不能为0哦...\n");
			return;
		}
		result = data1/data2;
		break;
		default:printf("输入有误...\n");break;
	}
	printf("表达式的结果为：%d\n",result);
}

// test case
int main(int argc, char const *argv[])
{
	/* code */
	printf("请输入表达式，形如2 + 3:");
	int data1,data2;
	char op;
	scanf("%d %c %d",&data1,&op,&data2);

	calculate(data1,op,data2);

	getchar();
	
	return 0;
}
