#include<stdio.h>
int main() {
//求瑞年，判定条件：能被4整除但不能被100整除，能被400整除
for  (int i=1900;i<=2000;i++)
{
	if(i%4==0&&i%100!=0||i%400==0)
	{
		printf("%d是瑞年\n",i);
	}
 } 
}
