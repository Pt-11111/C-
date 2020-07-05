#include<stdio.h>
int main(){//BY Pt.
	//斐波那契数列 
	int f1=1,f2=1,k=3,f3;
	int n;
	printf("请输入要输出的个数:");
	scanf("%d",&n);
	printf("%12d%12d",f1,f2);
	for(int i=0;i<=n;i++,k++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		printf("%12d",f3);
		if(k%4==0)
		printf("\n");
	 } 
} 
