#include<stdio.h>
int main(){//BY Pt.
	/*
	ѡ������ð������ 
	*/
	void bluSort(int a[],int n);
	void selectSort(int a[],int n); 
	 int num[20],n;
	 printf("���������鳤�ȣ�");
	 scanf("%d",&n);
	 printf("������%d������",n);
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&num[i]);
	  } 
	  printf("����ǰ\n");
	  for(int i=0;i<n;i++)
	{
		printf("%d  ",num[i]);
	} 
	printf("\nð������󣺴�С����\n");
	  bluSort(num,n);
	printf("\nѡ������󣺴Ӵ�С\n");
	  selectSort(num,n);  
}
void bluSort(int a[],int n)//ð������ �ı����������� ������С�������� 
{
	int temp;
	//printf("ִ�е�"); 
	for(int i=0;i<n-1;i++)//n-1����Ϊ���һ�ν�������ȷ�������� 
	{
		for(int j=0;j<n-i-1;j++)//i�����Ѿ��źõ��������Բ����ٿ��ǣ�-1ͬ�� 
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	} 
}
void selectSort(int a[],int n)
{
	int temp,flag;
	for(int i=0;i<n-1;i++)//-1��ʾ���һ�������� 
	{
		flag=i;
		for(int j=i+1;j<n;j++) //�� i �����һ����ʼ�ȣ�һֱ�ȵ� ��� 
		{
			if(a[j]>a[i])
			{
				flag=j;//���˱���λ�ü��� 
			}
		} 
		//ѭ����ϣ��� i �� �ͺ�����С�Ľ���λ��
		temp=a[i];
		a[i]=a[flag];
		a[flag]=temp; //һ�ֽ��� 
	}
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	} 
 } 
