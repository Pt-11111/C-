#include<stdio.h>
#include<math.h>
int main(){//BY Pt.
	//�ҳ�������һ����ǡ�õ�����������֮��
	//�����ʽ������xxx= xxx + xxx + xxx
	int num[20],sum;
	 for(int i=1;i<=1000;i++)
	 {
	 	   int k=0;//kֻ���������� 
			sum=0;	
	 	for(int j=1;j<i;j++)//��һ������Ϊ 1 �� 
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
