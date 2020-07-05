#include<stdio.h>
#include<math.h>
int main(){//BY PT.
	double temp;
	int num;
	a: printf("请输入一个小于1000的正整数：");
	scanf("%d",&num);
	if(num>1000||num<=0)
	{
	printf("格式不对，请重新输入\n");	
	goto a;
	}
	temp=sqrt(num);
	if(int(temp)==temp)
	{
		printf("%d平方根是整数:%lf",num,temp);
	}
	else
	{
		printf("%d平方根%lf不是整数\n输出整数部分%d",num,temp,int(temp));
		
	}
}
