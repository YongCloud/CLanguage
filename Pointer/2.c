/*
	created by yangyong,Dec 2,2016
	function:输入3个字符串，按由小到大的顺序输出。
*/
#include <stdio.h>
#include <string.h>
#define STRING_LENGTH 30

int main(int argc, char const *argv[]){
	char str1[STRING_LENGTH],str2[STRING_LENGTH],str3[STRING_LENGTH];

	printf("please input 3 string:\n");
	scanf("%s %s %s",str1,str2,str3);

	void swap_string(char *str1,char *str2);
	
	if(strcmp(str1,str2)>0){
		swap_string(str1,str2);
	}

	if(strcmp(str2,str3)>0){
		swap_string(str2,str3);
	}

	if(strcmp(str1,str2)>0){
		swap_string(str1,str2);
	}

	printf("the result is :%s %s %s\n",str1,str2,str3);

	return 0;
}

// 交换2个字符串的值
void swap_string(char *str1,char *str2){
	char t[STRING_LENGTH];
	strcpy(t,str1);
	strcpy(str1,str2);
	strcpy(str2,t);
}
