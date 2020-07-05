#include<stdio.h>//BY PT. 
int main() 
{ //这个题可以用排序算法 
	int num1,num2,num3,tran;//将最大的数换到第一个数，然后将剩下的两个数比较值后考虑换不换位置 
	printf("请输入三个数：");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1<num2)
	{
	tran=num1;
	num1=num2;
	num2=tran;
	}
   if(num1<num3) 
	{
	tran=num1;
	num1=num3;
	num3=tran;
	}//到这里已经比较排出了最大值 
	if(num2<num3)
	{
	tran=num2;
	num2=num3;
	num3=tran;	
	}
	printf("%d %d %d",num1,num2,num3);
	
}
