/*
	计科132 19213210 杨勇 2016/10/18
	功能：通过键盘输入字符，将输入的字符分为控制、数字、大写字母、小写字母和其他字符等五类。
*/
#include <stdio.h>

void judge_character(char c){
	if(c>='0' && c<='9'){
		printf("%c is a number.\n",c);
	}else if(c>='A' && c<='Z'){
		printf("%c is a big character.\n",c);
	}else if(c>='a' && c<='z'){
		printf("%c is a small character.\n",c);
	}else if(c<0x20){
		printf("%c is a controlling character.\n",c);
	}else{
		printf("%c is a other character.\n",c);
	}
}

// test case
int main(int argc, char const *argv[])
{
	/* code */
	printf("please input a character:");

	char c = '0';
	scanf("%c",&c);
	judge_character(c);

	return 0;
}