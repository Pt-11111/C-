#include<stdio.h>//BY PT.
int main()
{//�ж�һ�����ܷ�3��5���� 
	int num;
	printf("������һ����:");
	scanf("%d",&num);
	if(num%3==0&&num%5==0)
	printf("%d�ܱ�3��5����",num);
	 else
	printf("%d���ܱ�3��5����",num);
}
