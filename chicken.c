/*
	created by yangyong,Oct 29,2016
	function:百钱买百鸡问题。
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 21; ++i){
		for(j = 0;j < 34;++j){
			for(k = 0;k < 101;++k){
				if((100 == i+j+k) && (100 == 5*i+3*j+k/3) && (0 == k%3)){
					printf("%d,%d,%d\n",i,j,k);
				}
			}
		}
	}

	return 0;
}