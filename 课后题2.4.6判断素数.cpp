#include<stdio.h>//BY PT.
#include<math.h> 
int main()
{//输出100-200之间的素数 
	int flag,format=0;
	for(int i=100;i<=200;i++)
	{   flag=0;
		for(int j=2;j<=sqrt(i);j++)//课本里写到根下这个数匹配不到就是素数 
		{
			if(i%j==0)
			{
				flag=1;
				break; //加了break理论上运行时间应该变快，结果是差不多  
			}
		}
		if(flag==0)  //犯了低级错误，关系(比较)运算符==写成了赋值运算符。 !>算术>关系>逻辑>赋值>, 
		{  format++;
			printf("%d是素数    ",i);
			if(format%7==0)
			printf("\n");
		}
	
}} 
