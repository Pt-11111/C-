#include<stdio.h>
int main(){
	//BY Pt.
	//�� 2/1,3/2,5/3,8/5��...ǰn���
	double son=2,mom=1,temp=0;//����һ���ֵ 
	int n;
	printf("������Ҫ���������");
	scanf("%d",&n);
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+son/mom;
		temp=son;
		son=son+mom;
		mom=temp;
	 } 
	 printf("%.2lf",sum);
}
