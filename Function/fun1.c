/*
	created by yangyong,Dec 11,2016
	function:函数拓展题1
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
	int i = 0;
	int max = 0;
	// 假设当前系统中int大小为4B
	char str[32];
	void to_bianry(int n,char *str);
	char is_palinedrome(char *str);

	for(i=1;i<=1993;i++){
		to_bianry(i,str);
		if('Y' == is_palinedrome(str)){
			max = i;
		}
	}
	printf("%d\n",max);
	
	return 0;
}

// 将十进制正整数n转化为二进制
void to_bianry(int n,char *str){
	int index = 0;
	while(n){
		*(str+index) = n%2 + 0x30;
		n = n/2;
		index++;
	}
	*(str+index) = '\0';
}

// 判断一个二进制序列是否回文（即对称）
char is_palinedrome(char *str){
	char *end = str;
	// 将指针指向字符串结尾
	while(*end != '\0'){
		end++;
	}
	end--;
	// 判断
	while(str++ <= end--){
		if(*str != *end){
			return 'N';
		}
	}
	return 'Y';
}