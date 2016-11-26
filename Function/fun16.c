/*
	created by yangyong,Nov 26,2016
	function:用指针编写比较两个字符串s和t的函数strcmp(s，t)。
			要求s<t时返回-1，s=t时返回0，s>t时返回1。
*/
#include <stdio.h>

// 比较2个字符串大小
int strcmp(char *s,char *t){
	int result = 0;
	while(*s!='\0' && *t!='\0'){
		if(*s>*t){
			result = 1;
		}else if(*s<*t){
			result = -1;
		}else{
			result = 0;
		}

		if(result != 0){
			break;
		}

		s++;
		t++;
	}
	return result;
}

// test case
int main(int argc, char const *argv[]){
	char s[30];
	char t[30];
	printf("please input the fisrt string:\n");
	scanf("%s",s);
	printf("please input the second string:\n");
	scanf("%s",t);
	printf("the comparison result is:%d\n",strcmp(s,t));
	
	return 0;
}