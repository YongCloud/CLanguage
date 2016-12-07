/*
	created by yangyong,Oct 4,2016
	function:获取当下系统环境下的int类型的最大值
*/
#include <stdio.h>

int get_int_max(){
	return ~(unsigned int)0>>1;
}

// test case
int main(int argc, char const *argv[]){
	printf("%d\n",get_int_max());
	
	return 0;
}