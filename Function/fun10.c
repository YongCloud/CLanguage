/*
	created by yangyong,Nov 27,2016
	function:用指针作为函数的形式参数，编写字符串复制函数。
*/
#include <stdio.h>

// copy s to t
void string_copy(char *s,char *t){
	while(*t++ = *s++){
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