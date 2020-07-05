#include<stdio.h>//BY PT.
int main()
{
	//2.4.1交换两个瓶子A,B内的东西
	int A,B,C;
	A=1;B=2; 
	printf("交换前：A=%d,B=%d\n",A,B);
	{
		//交换代码
		C=A;
		A=B;
		B=C; 
	}
	printf("交换后：A=%d,B=%d",A,B);
}
