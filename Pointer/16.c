/*
	created by yangyong,Dec 2,2016
	function:教材第8章 习题16
*/
#include <stdio.h>
#include <stdlib.h>
#define STRING_LENGTH 30 // 字符串长度

int main(int argc, char const *argv[]){
	char str[STRING_LENGTH];
	int *arr = NULL;
	int count = 0;
	printf("please input a string :\n");
	scanf("%s",str);

	int *exract_integer(char *str);
	arr = exract_integer(str);

	while(*(arr+count) != -1){
		printf("%d ",*(arr+count));
		count++;
	}
	printf("整数个数：");
	printf("%d\n", --count);

	// very vital
	free(arr);

	return 0;
}

// 将分布在一个字符串中的数字以整数的形式萃取出来
// 存放到一个数组中
int *exract_integer(char *str){
	int length = 0;// 存放数组元素个数
	int init_size = 10; // 存放分配的存储单元数
	int temp = 0; // 存放临时萃取出来的整数
	char is_first = 'Y';
	int *arr = NULL;
	arr = (int *)malloc(init_size*sizeof(int));

	// 萃取整数
	while(*str != '\0'){
		if(*str >= '0' && *str <= '9'){
			temp = temp * 10 + (*str - '0');
		}else{
			if(is_first == 'Y'){
				is_first = 'N';
			}else{
				if(length>=init_size){
					arr = realloc(arr,(init_size+10)*sizeof(int));
					init_size += 10;
				}else{
					*(arr+length) = temp;
					length++;
					temp = 0;
				}
			}
		}

		str++;
	}

	*(arr+length) = -1; // 数组结束标志
	return arr;
}