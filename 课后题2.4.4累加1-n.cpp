#include<stdio.h>//BY PT.
int main(){
	//�ۼ�һ��n//����������ø�˹����n*(1+n)/2 
	int n,sum=0;
	printf("�������ۼӵ�����");
	scanf("%d",&n);
	 for(int i=1;i<=n;i++)
	 {
	 	sum+=i;
	 }
	 printf("�ۼӺ���:%d",sum);
} 
