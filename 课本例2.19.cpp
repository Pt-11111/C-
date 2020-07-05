#include<stdio.h>
int main()
{//求多项式课本例2.19 
		float sum=1,flag=1,son=1,xiang;
		for(int i=2;i<=100;i++)
		{
			flag=-flag;
			xiang= flag*(son/i);
			sum=sum+xiang;
		}
		printf("多项式的值%f",sum);
}
