/*
	created by yangyong,Dec 12,2016
	function:判断一个整数的是不是质数
*/
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){
	int n = 0;
	printf("please input a integer:");
	scanf("%d",&n);
	bool is_prime(int n);
	
	if(is_prime(n)){
		printf("%d is prime...\n",n);
	}else{
		printf("%d is not prime...\n",n);
	}

	return 0;
}

bool is_prime(int n){
	int i = 0;
	if(n<2){
		return false;
	}
	if(2 == n){
		return true;
	}
	for(i=2;i<=n/2;i++){
		if(0 == n%i){
			return false;
		}
	}
	return true;
}