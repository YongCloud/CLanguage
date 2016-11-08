/*
	created by yangyong,Nov 8,2016
	function:循环结构第4题
*/
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[]){
	int i = 0;
	int j = 0;
	for(i=1;i<10;i++){
		printf("%d  ",i);
	}
	printf("\n");
	printf("---------------------------------\n");

	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			printf("%d  ",i*j);
		}
		printf("\n");
	}
	
	printf("please press ang key to exit...\n");
	getchar();

	return 0;
}