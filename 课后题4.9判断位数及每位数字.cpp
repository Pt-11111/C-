#include<stdio.h>
#include<math.h>
int biteNum(int *num);
void everyNum(int tempNum,int numBite);
int main(){//BY Pt.
	int *num;
	int n,numBite,tempNum;
	printf("������һ��������9λ����������");
	scanf("%d",&n);
	tempNum=n;
	num=&n;
	numBite=biteNum(num);//��ʱnum��ֵ�Ѿ����ˣ�Ӧ����һ��������һ��ʼ�������� 
	printf("�����������λ��Ϊ��%dλ",numBite);
	everyNum(tempNum,numBite);
}
int biteNum(int * num)//��ָ�봿��Ϊ������ָ�� ����ʵ���һ�٣����ԭ������ 
{
	int i=1;
	while((*num/10))
	{
		*num=*num/10;
		i++;
		
	}
	//printf("%d",*num);//�ж�����������ʱ�����һ�β�ִ�У����ԣ�*num)��ֵ������0(Ϊ���λ���֣��� 
	return i;
 } 
 void everyNum(int tempNum,int numBite)
 {
 	int a[10]={0};
 	 printf("�������\n");
 	for(int i=numBite-1;i>=0;i--)
 	{
 		
 		a[i]=tempNum/pow(10,i);	//���λ���� 
 		tempNum=tempNum-(a[i]*pow(10,i));//ԭ����ȥǰһλ 
 		
 		printf("   %d ",a[i]);
	 }
	 printf("\n�������\n");
	 for(int j=0;j<numBite;j++)
	 {
	 printf("   %d  ",a[j]);
	 }
  } 
  
