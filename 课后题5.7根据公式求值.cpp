#include<stdio.h>
#include<math.h>
int main() {//BY Pt.
	//��1-n1�ĺ� + 1^2-n2^2�ĺ� + 1/1-1/n3 �ĺ�
	printf("������ n1,n2,n3��ֵ��");
	int n1,n2,n3;
	double sum=0;
	scanf("%d %d %d",&n1,&n2,&n3);//����ȡַ�� 
    for(int i=1;i<=n1;i++)
    {
    	sum=sum+i;
    	if(i<=n2)
    	{
    		sum=sum+pow(i,2);
		}
		if(i<=n3)
		{
			sum=sum+(1.0/i);
		}
	}
	printf("%lf",sum);
}
