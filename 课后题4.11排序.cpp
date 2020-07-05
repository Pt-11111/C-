#include<stdio.h>
int main(){//BY Pt.
	/*
	选择排序，冒牌排序 
	*/
	void bluSort(int a[],int n);
	void selectSort(int a[],int n); 
	 int num[20],n;
	 printf("请输入数组长度：");
	 scanf("%d",&n);
	 printf("请输入%d个整数",n);
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&num[i]);
	  } 
	  printf("排序前\n");
	  for(int i=0;i<n;i++)
	{
		printf("%d  ",num[i]);
	} 
	printf("\n冒泡排序后：从小到大\n");
	  bluSort(num,n);
	printf("\n选择排序后：从大到小\n");
	  selectSort(num,n);  
}
void bluSort(int a[],int n)//冒泡排序 改变了数组内容 ，按从小到大排序 
{
	int temp;
	//printf("执行到"); 
	for(int i=0;i<n-1;i++)//n-1是因为最后一次交换可以确定两个数 
	{
		for(int j=0;j<n-i-1;j++)//i代表已经排好的数，所以不用再考虑，-1同上 
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	} 
}
void selectSort(int a[],int n)
{
	int temp,flag;
	for(int i=0;i<n-1;i++)//-1表示最后一个不用排 
	{
		flag=i;
		for(int j=i+1;j<n;j++) //从 i 后面第一个开始比，一直比到 最后 
		{
			if(a[j]>a[i])
			{
				flag=j;//将此变量位置记下 
			}
		} 
		//循环完毕，将 i 个 和后面最小的交换位置
		temp=a[i];
		a[i]=a[flag];
		a[flag]=temp; //一轮结束 
	}
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	} 
 } 
