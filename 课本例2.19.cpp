#include<stdio.h>
int main()
{//�����ʽ�α���2.19 
		float sum=1,flag=1,son=1,xiang;
		for(int i=2;i<=100;i++)
		{
			flag=-flag;
			xiang= flag*(son/i);
			sum=sum+xiang;
		}
		printf("����ʽ��ֵ%f",sum);
}
