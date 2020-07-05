#include<stdio.h>//BY PT.
int main()
{
	//依次输入十个数，然后输出最大的数
	int max=0,num,flag;
	for(int i=1;i<=10;i++) 
	{
		printf("请输入第%d个数：",i); 
		scanf("%d",&num);  //第一次用输入竟然就出问题！！！忘了加取值符号& 
		if(num>max){
			max=num;
			flag=i;
		}
	 } 
	printf("最大的数是第%d个数：%d",flag,max);
}
