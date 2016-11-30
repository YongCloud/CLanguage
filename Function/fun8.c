/*
	created by yangyong,Nov 30,2016
	function:判断一字符串是否回文（不考虑空格和标点符号）
*/
#include <stdio.h>

// 判断字符串是否回文，是返回'Y'，否则返回'N'
char is_palinedrome(char *str){
	char *end = str;

	while(*end !='\0'){
		end++;
	}
	end--;

	while(str<=end){
		if(*str == ' ' || *str ==',' || *str == '.'){
			str++;
		}
		if(*end == ' ' || *end ==',' || *end == '.'){
			end--;
		}
		if(*str != *end){
			return 'N';
		}

		str++;
		end--;
	}
	return 'Y';
}

// test case
int main(int argc, char const *argv[]){
	char str[20];
	printf("please input a string:\n");
	scanf("%s",str);

	if(is_palinedrome(str) == 'Y'){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	return 0;
}