#include<stdio.h>
#include<math.h>
int main(){//BY Pt.
	//找出完数：一个数恰好等于它的因子之和
	//输出格式：完数xxx= xxx + xxx + xxx
	int num[20],sum;
	 for(int i=1;i<=1000;i++)
	 {
	 	   int k=0;//k只能在这声明 
			sum=0;	
	 	for(int j=1;j<i;j++)//第一个因子为 1 ， 
	 	{
		if(i%j==0)
	 		{
	 		num[k]=j;
	 		sum=sum+j;
			 k++;	
			 }
		 }
		 if(sum==i)
		 {
		 	printf("%d=",i);
		 	for(int l=0;l<k-1;l++)
		 	{
		 		printf("%d+",num[l]); 
			 }
			 printf("%d\n",num[k-1]);
		 }	
	 }
}
