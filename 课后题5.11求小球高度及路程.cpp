#include<stdio.h>
int main(){//BY Pt.
	double temp,height=100,length=0;
	int n;
	printf("请输入落地次数：");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{    temp=height;
		height=height/2;
		length=length+temp+height;
	}
	printf("落地%d次时高度为：%lf 小球总路程为：%lf",n,height,length);
}
