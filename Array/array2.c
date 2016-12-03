/*
	created by yangyong,Nov 5,2016
	function:数组拓展题2解答
*/
#include <stdio.h>
#define ROW 5
#define COLUMN 5

int main(int argc, char const *argv[]){
	int a[ROW][COLUMN];
	int i = 0;
	int j = 0;
	int ones = 0;

	for(i=0;i<ROW;i++){
		// 存储1
		for(j=i+1;j<COLUMN;j++){
			a[i][j] = 1;
			ones++;
		}
		// 存储其他数字
		for(j=0;j<=i;j++){
			a[i][j] = COLUMN - ones - j;
		}
		ones = 0;
	}

	// 打印结果
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}