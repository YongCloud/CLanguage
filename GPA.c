/*
	created by yangyong,Dec 12,2016
	function:计算GPA的小程序，计算方法：GPA=∑（课程学分×成绩绩点）/∑课程学分
*/
#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[]){
	float credit = 0; // 学分
	int score = 0; // 成绩
	float sum_credit = 0;
	int sum_score = 0;
	float get_credit(int n);

	printf("please input credit and score(5.0 95),input (-1 0) to exit:\n");
	scanf("%f %d",&credit,&score);
	while(credit != -1){
		sum_credit += (credit * get_credit(score));
		sum_score += credit;
		scanf("%f %d",&credit,&score);
	}
	printf("GPA=%f\n",sum_credit/sum_score);
	
	getchar();
	return 0;
}

// 根据成绩获取对应的绩点
float get_credit(int n){
	if(n<60){
		return 0.0;
	}else if(n<65){
		return 1.0;
	}else if(n<70){
		return 1.5;
	}else if(n<75){
		return 2.0;
	}else if(n<80){
		return 2.5;
	}else if(n<85){
		return 3.0;
	}else if(n<90){
		return 3.5;
	}else if(n<95){
		return 4.0;
	}else{
		return 4.5;
	}
}