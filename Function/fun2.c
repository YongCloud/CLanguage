/*
	created by yangyong,Dec 8,2016
	function:函数拓展题2
*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){
	void fun2();
	fun2();

	return 0;
}

// 函数第二题
void fun2(){
	int i,j,k;
	int temp = 0;
	char is_sqrt(int n);

	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			for(k=1;k<10;k++){
				if(i!=j && i!=k && j!=k){
					temp = i*100 + j*10 +k;
					if('Y' == is_sqrt(temp)){
						printf("%d\n",temp);
					}
				}
			}
		}
	}
}

// 判断一个整数是不是完全平方数
char is_sqrt(int n){
	int sq = sqrt(n);
	if(n == sq*sq){
		return 'Y';
	}
	return 'N';
}