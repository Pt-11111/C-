#include<stdio.h>
int main(){
	//BY Pt.
	//求 2/1,3/2,5/3,8/5，...前n项和
	double son=2,mom=1,temp=0;//给第一项赋初值 
	int n;
	printf("请输入要求的项数：");
	scanf("%d",&n);
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+son/mom;
		temp=son;
		son=son+mom;
		mom=temp;
	 } 
	 printf("%.2lf",sum);
}
