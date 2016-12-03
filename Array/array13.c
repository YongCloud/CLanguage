/*
	created by yangyong,Dec 3,2016
	function:数组考试题1参考答案（拓展题13）
*/
#include <stdio.h>
#define ROW 5 // 行数
#define COLUMN 5 // 列数

int main(int argc, char const *argv[]){
	int a[ROW][COLUMN];
	int i = 0;
	int j = 0;
	int sum = 0;

	// 输入数组
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			scanf("%d",&a[i][j]);
		}
	}

	// 求对角线和
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			if((i==j) || (i+j == COLUMN-1)){
				sum += a[i][j];
			}
		}
	}
	// 去除重复值
	// sum -= a[ROW/2][COLUMN/2];

	// 打印结果
	printf("%d\n",sum);

	return 0;
}