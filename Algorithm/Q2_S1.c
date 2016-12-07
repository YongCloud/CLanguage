/*
	暴力求解法
	算法思想：先找出从第1个元素开始的最大子数组，而后再从第2个元素开始找出从第2个元素开始的最大子数组，
	依次类推，比较得出最大的子数组。
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
  int j = 0;
  result res;
  res.sum = 0;
  int cur_sum;

  for(i=0;i<length;i++){
  	 cur_sum = 0;
    for(j=i;j<length;j++){
      cur_sum += arr[j];
      if(cur_sum >  res.sum){
      	res.sum = cur_sum;
      	res.low = i;
      	res.high = j;
      }
    }
  }
  return res;
}
/*
	算法分析：时间复杂度O(n^2)，空间复杂度O（1）
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