#include<stdio.h>//BY PT.
int main()
{
	//��������ʮ������Ȼ�����������
	int max=0,num,flag;
	for(int i=1;i<=10;i++) 
	{
		printf("�������%d������",i); 
		scanf("%d",&num);  //��һ�������뾹Ȼ�ͳ����⣡�������˼�ȡֵ����& 
		if(num>max){
			max=num;
			flag=i;
		}
	 } 
	printf("�������ǵ�%d������%d",flag,max);
}
