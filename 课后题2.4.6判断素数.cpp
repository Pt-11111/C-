#include<stdio.h>//BY PT.
#include<math.h> 
int main()
{//���100-200֮������� 
	int flag,format=0;
	for(int i=100;i<=200;i++)
	{   flag=0;
		for(int j=2;j<=sqrt(i);j++)//�α���д�����������ƥ�䲻���������� 
		{
			if(i%j==0)
			{
				flag=1;
				break; //����break����������ʱ��Ӧ�ñ�죬����ǲ��  
			}
		}
		if(flag==0)  //���˵ͼ����󣬹�ϵ(�Ƚ�)�����==д���˸�ֵ������� !>����>��ϵ>�߼�>��ֵ>, 
		{  format++;
			printf("%d������    ",i);
			if(format%7==0)
			printf("\n");
		}
	
}} 
