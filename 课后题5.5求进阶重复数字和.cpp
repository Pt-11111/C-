#include<stdio.h>
#include<math.h>
void simply(int num,int n);
void complex(int num,int n);
int main(){
	//BY Pt.
	//��a+aa+aaa+aaaa+....+aaaaaaaa..aaa
	int num=0,n=0;
	printf("�������ظ������ּ�����");
	scanf("%d %d",&num,&n);
	printf("�򵥰�\n");
	simply(num,n);
	printf("��ϸ��\n");
	complex(num,n);
}
void simply(int num,int n){
		double sum=0;
	for(int i=1;i<=n;i++)//���ƴ��� 
	{
		for(int j=0;j<i;j++){//����λ�� 
			sum=sum+num*pow(10,j);
		}
	}
	printf("%.0lf\n",sum);
}
void complex(int num,int n){
		double Sum=0,sum=0;
	for(int i=1;i<=n;i++)//���ƴ��� 
	{    sum=0;
		for(int j=0;j<i;j++){//����λ�� 
			sum=sum+num*pow(10,j);
		}
		if(i<n){
			printf("%.0lf+",sum);
		}else if(i=n){
			printf("%.0lf",sum);
		}
		Sum=Sum+sum;
	}
	printf("=%.0lf\n",Sum);
}
