/*
	created by yangyong,Dec 7,2016
	function:输入字符串，请分别统计字符串中所包含的各个不同的字符及其各自字符的数量，
*/
#include <stdio.h>
#define CHAR_NUM 256 // ASCII码字符最多256个
#define STRING_LENGTH 300 // 要存放的字符串长度

int *calculate_chars(char *str){
	// 一定要定义为static，否则返回后指针无效
	static int table[CHAR_NUM] = {0};
	while(*str != '\0'){
		// 出现的字符数加1
		table[*str-'\0']++;
		str++;
	}
	return table; 
}

// test case
int main(int argc, char const *argv[]){
	char str[STRING_LENGTH];
	int *table = NULL;
	int i = 0;
	
	printf("please input a string:\n");
	// 注意scanf()和gets()的区别
	// scanf("%s",str);
	gets(str);

	int *calculate_chars(char *str);
	table = calculate_chars(str);

	// 打印结果
	for(i=0;i<CHAR_NUM;i++){
		if(0 != table[i]){
			printf("%c:%d\t",(char)i,table[i]);
		}
	}
	printf("\n");

	return 0;
}