#include<stdio.h>
#include<math.h>
int main(){//BY PT.
	double temp;
	int num;
	a: printf("������һ��С��1000����������");
	scanf("%d",&num);
	if(num>1000||num<=0)
	{
	printf("��ʽ���ԣ�����������\n");	
	goto a;
	}
	temp=sqrt(num);
	if(int(temp)==temp)
	{
		printf("%dƽ����������:%lf",num,temp);
	}
	else
	{
		printf("%dƽ����%lf��������\n�����������%d",num,temp,int(temp));
		
	}
}
