#include<stdio.h>
int main(){
	//BY Pt.
	//��n�׵ĺͣ�1��+2��+3��+������n!
	//����Ϳκ���5.5�㷨���� 
	double sum=0,num=1;
	int n=20;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			num*=j;
		}
		sum=sum+num; 
		num=1;
	}
	printf("%G",sum);
	 
}
