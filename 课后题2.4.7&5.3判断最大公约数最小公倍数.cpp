#include<stdio.h>//BY PT.
int main() {
	/*��m,n�����Լ������С������
	   ��Լ������շת�������շת�������
	  �ж�������Ϊ0
	  ��С������=m*n/���Լ�� */
	int forDivide(int m,int n);
	int forCut(int m,int n) ;
	int m,n,pubnum1,pubnum2;
	printf("��������������");
	scanf("%d %d",&m,&n);
	pubnum1=forDivide(m,n);
	pubnum2=forCut(m,n);
	printf("շת��������Լ����%d\n",pubnum1);
	printf("������������Լ����%d\n",pubnum2);
	printf("��С������=m*n/���Լ����%d",m*n/pubnum1);
 
}
//շת����������Լ��
int forDivide(int m,int n) {
	int check;
	do {
		check=m%n;
		m=n;
		n=check;
	} while(check!=0);
	return m;

}
//շת�����(�������������)�����Լ��
int forCut(int m,int n) {
	int check;
	do {
		if(m>n) {
			check=m-n;
		} else {
			check=n-m;

		}
		m=n;
		n=check;
	} while(check!=0);
	return m;
}
