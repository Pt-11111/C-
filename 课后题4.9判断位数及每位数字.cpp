#include<stdio.h>
#include<math.h>
int biteNum(int *num);
void everyNum(int tempNum,int numBite);
int main(){//BY Pt.
	int *num;
	int n,numBite,tempNum;
	printf("请输入一个不多于9位的正整数：");
	scanf("%d",&n);
	tempNum=n;
	num=&n;
	numBite=biteNum(num);//此时num的值已经变了，应该用一个变量在一开始把它保存 
	printf("您输入的数字位数为：%d位",numBite);
	everyNum(tempNum,numBite);
}
int biteNum(int * num)//用指针纯粹为了试试指针 ，其实多此一举，造成原数改了 
{
	int i=1;
	while((*num/10))
	{
		*num=*num/10;
		i++;
		
	}
	//printf("%d",*num);//判断条件不成立时，最后一次不执行，所以（*num)的值并不是0(为最高位数字）； 
	return i;
 } 
 void everyNum(int tempNum,int numBite)
 {
 	int a[10]={0};
 	 printf("正向输出\n");
 	for(int i=numBite-1;i>=0;i--)
 	{
 		
 		a[i]=tempNum/pow(10,i);	//最高位数字 
 		tempNum=tempNum-(a[i]*pow(10,i));//原数减去前一位 
 		
 		printf("   %d ",a[i]);
	 }
	 printf("\n反向输出\n");
	 for(int j=0;j<numBite;j++)
	 {
	 printf("   %d  ",a[j]);
	 }
  } 
  
