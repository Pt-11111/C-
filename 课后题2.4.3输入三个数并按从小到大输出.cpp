#include<stdio.h>//BY PT. 
int main() 
{ //���������������㷨 
	int num1,num2,num3,tran;//��������������һ������Ȼ��ʣ�µ��������Ƚ�ֵ���ǻ�����λ�� 
	printf("��������������");
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
	}//�������Ѿ��Ƚ��ų������ֵ 
	if(num2<num3)
	{
	tran=num2;
	num2=num3;
	num3=tran;	
	}
	printf("%d %d %d",num1,num2,num3);
	
}
