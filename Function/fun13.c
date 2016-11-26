/*
	created by yangyong,Nov 26,2016
	function:编写函数，通过指针求字符串的长度。
*/
#include <stdio.h>

// 求字符串的长度
int string_length(char *str){
	int length = 0;
	while(*str != '\0'){
		length++;
		str++;
	}
	return length;
}

// test case
int main(int argc, char const *argv[]){
	char str[30];
	printf("please input a string:\n");
	scanf("%s",str);
	printf("the length of the string is :%d",string_length(str));
	
	return 0;
}