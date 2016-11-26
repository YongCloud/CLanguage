/*
	created by yangyong,Nov 26,2016
	function:编写函数，通过指针将一个字符串反向。
*/
#include <stdio.h>

void swap(char *a,char *b);
// 反转字符串
void reverse(char *str){
	char *end = str;
	while(*end != '\0'){
		end++;
	}
	end--;
	while(str <= end){
		swap(str,end);
		str++;
		end--;
	}
}

// 交换2个字符
void swap(char *a,char *b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// test case
int main(int argc, char const *argv[]){
	char str[30];
	printf("please input a string:\n");
	scanf("%s",str);
	reverse(str);
	printf("the string after reversing:\n");
	printf("%s",str);
	
	return 0;
}