/*
	created by ysngyong,Dec 2,2016
	function:数组考试题2参考答案（拓展题17）
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
	int a[2][3];
	int b[3][2];
	int i = 0;
	int j = 0;

	// 输入数组
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}

	// 顺时针旋转90度
	for(i=0;i<3;i++){
		for(j=1;j>=0;j--){
			b[i][j^1] = a[j][i];
		}
	}

	// 打印结果
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ",b[i][j]);
		}
		if(0 == (j%2)){
			printf("\n");
		}
	}
	printf("\n");
	
	return 0;
}