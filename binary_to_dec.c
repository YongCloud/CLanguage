#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	/* code */
	double input = 0.0;
	printf("please input a number:");
	scanf("%lf",&input);
	if(input>1.0){
		printf("sorry,your input is wrong...\n");
		return 1;
	}

	char res[80];
	res[0] = '0';
	res[1] = '.';
	double temp = 2*input;
	int i = 2;
	short sep = 1;
	while(i<75 && temp!=0.0){
		if(temp<1.0){
			res[i] = '0';
		}else{
			res[i] = '1';
			temp -= 1.0;
		}

		if(sep == 4){
			res[i] = ' ';
			sep = 0;
		}
		sep++;
		i++;
		temp *= 2;
	}
	res[i] = '\0';

	printf("result is :%s\n",res);
	printf("please press any key to exit...\n");
	getch();
	return 0;
}