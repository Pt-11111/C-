#include<stdio.h>
#include<math.h>
int main() {//BY Pt.
	//求1-n1的和 + 1^2-n2^2的和 + 1/1-1/n3 的和
	printf("请输入 n1,n2,n3的值：");
	int n1,n2,n3;
	double sum=0;
	scanf("%d %d %d",&n1,&n2,&n3);//又忘取址符 
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
