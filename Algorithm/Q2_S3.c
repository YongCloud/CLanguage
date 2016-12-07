/*
  线性时间算法
  算法思想：在每次元素累加和小于0时，从下一个元素重新开始累加
*/

// 返回結果结构体
typedef struct result
{
	int low;
	int high;
	int sum;
}result;

// 求最大子数组
result max_subarray(int *arr,int length)
{
  int i = 0;
  result res;
  res.sum = 0;
  int cur_sum = 0;

  for(i=0;i<length;i++){
    cur_sum += arr[i];
    if(cur_sum>res.sum){
      res.sum = cur_sum;
      res.high = i;
    }
    if(cur_sum<0){
      cur_sum = 0;
      res.low = i+1;
    }
  }
  return res;
}
/*
	算法分析：时间复杂度O(n)，空间复杂度O（1）
*/

// test case
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
	int length = 16;

	result res= max_subarray(arr,length);
	printf("low=%d high=%d sum=%d\n",res.low,res.high,res.sum);

	return 0;
}