/*
	created by yangyong,Nov 27,2016
	function:编写函数，通过指针连接两个字符串。
*/
#include <stdio.h>

// cat string src to dst
void string_cat(char *src,char *dst){
	while(*dst++){
		;
	}
	dst--;
	while(*dst++ = *src++){
		;
	}
}

// test case
int main(int argc, char const *argv[]){
	char *s = "world";
	char t[20] = "hello,";
	string_cat(s,t);
	printf("%s\n",t);
	return 0;
}