#include<stdio.h>
int main(){
	//BY Pt.
	//猴子吃桃问题
	int final=1;
    for(int i=9;i>=1;i--)
	{
	 printf("第%d天早上有%d个桃子\n",i,final=(final+1)*2);	
	 } 
	 
}
