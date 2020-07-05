#include<stdio.h>//BY PT.
int main(){
	//累加一到n//这个还可以用高斯方程n*(1+n)/2 
	int n,sum=0;
	printf("请输入累加到几：");
	scanf("%d",&n);
	 for(int i=1;i<=n;i++)
	 {
	 	sum+=i;
	 }
	 printf("累加后结果:%d",sum);
} 
