/*
	归并排序算法
	算法思想：分治法
	算法功能：按非递减规律对序列arr[0...n-1]的low（包含）和high（包含）之间
	的子序列进行归并排序，算法不对low和high作参数合法性检验，默认是合法的
*/

void merge_sort(int *arr,int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		// 将序列一分为二，分别排序
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		// 对排序后的结果进行合并
		void merge(int *arr,int low,int mid,int high);
		merge(arr,low,mid,high);
	}
} 
/*
	算法分析：时间复杂度O（nlgn），空间复杂度？待定
*/

/*
	对2个排序后的子序列进行合并
*/
void merge(int *arr,int low,int mid,int high){
	int n1 = mid-low+1;
	int n2 = high-mid;
	int L[n1+1];
	int R[n2+1];
	int i = 0;
	int j = 0;

	for(i=0;i<n1;i++){
		L[i] = arr[low+i-1];
	}
	for(j=0;j<n2;j++){
		R[j] = R[mid+j];
	}

	// 设置哨兵
	int get_int_max();
	int int_max= get_int_max();
	L[n1] = int_max;
	R[n2] = int_max;
	
	// 合并
	i = 0;
	j = 0;
	int k = 0;
	for(k=low;k<=high;k++){
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}else{
			arr[k] = R[j];
			j++;
		}
	}
}

/*
	获取当下系统环境下的int类型的最大值
*/
int get_int_max(){
	return ~(unsigned int)0>>1;
}


// test carr
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int arr[] = {7,6,5,1,2,3,4,8,9,7};
	int n = 10;
	// 排序
	merge_sort(arr,0,n-1);
	// 打印输出
	int i = 0;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	return 0;
}