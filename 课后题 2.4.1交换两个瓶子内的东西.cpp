#include<stdio.h>//BY PT.
int main()
{
	//2.4.1��������ƿ��A,B�ڵĶ���
	int A,B,C;
	A=1;B=2; 
	printf("����ǰ��A=%d,B=%d\n",A,B);
	{
		//��������
		C=A;
		A=B;
		B=C; 
	}
	printf("������A=%d,B=%d",A,B);
}
