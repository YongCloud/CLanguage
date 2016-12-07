/*
	created by yangyong,Dec 7,2016
	function:数组拓展题12
*/
#include <stdio.h>

void print_graph(int n){
	int i = 0;
	int j = 0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i+1;j++){
			printf("%d\t",(i+j)*(i+j-1)/2+1-i);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[]){
	int n = 0;
	printf("please input a integer:\n");
	scanf("%d",&n);

	void print_graph(int n);
	print_graph(n);

	return 0;
}