#include<stdio.h>//BY PT.
int main()
{//判断一个数能否被3和5整除 
	int num;
	printf("请输入一个数:");
	scanf("%d",&num);
	if(num%3==0&&num%5==0)
	printf("%d能被3和5整除",num);
	 else
	printf("%d不能被3和5整除",num);
}
