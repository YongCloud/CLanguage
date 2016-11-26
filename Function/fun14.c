/*
	created by yangyong,Nov 26,2016
	function:编程按指针方式引用命令行的参数。
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
	int i = 0;
	printf("the number of arguments are :%d\n",argc);
	printf("the arguments list is :\n");
	for(i=0;i<argc;i++){
		printf("%s ",argv[i]);
	}

	return 0;
}