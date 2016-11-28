/*
	created by yangyong,Nov 27,2016
	function:用指针作为函数的形式参数，编写字符串复制函数。
*/
#include <stdio.h>

// copy string src to dst
void string_copy(char *src,char *dst){
	while(*dst++ = *src++){
		;
	}
}

// test case
int main(int argc, char const *argv[]){
	char *s = "hello,world";
	char t[20]; 
	string_copy(s,t);
	printf("%s\n",t);
	return 0;
}