#include<stdio.h>
int main(){//BY Pt.
	double temp,height=100,length=0;
	int n;
	printf("��������ش�����");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{    temp=height;
		height=height/2;
		length=length+temp+height;
	}
	printf("���%d��ʱ�߶�Ϊ��%lf С����·��Ϊ��%lf",n,height,length);
}
