#include<stdio.h>

int main(){
	int a = 0;
	printf("Please input a number:");
	// scanf()�������ض����˶��ٸ�����
	int in = scanf("%d",&a);
	printf("%d\n",in);

	// printf()�����������׼����豸������ַ���
	int out = printf("Hello,World!\n");
	// out = 13
	printf("%d\n",out);
	return 0;
}
