#include<stdio.h>
#include<math.h> 
int main(){
	//BY Pt.
	//�õ�������x=sqrt(a); a��Ҫ�������
	 float a,x0,x1;
	 printf("������һ�����ڵ����������");
	 scanf("%f",&a);
	 x0=0.1;//x0���Ե��ڴ�������κ��� 
	 x1=(x0+a/x0)/2;
	 do{
	 	x0=x1;
	 	x1=(x0+a/x0)/2;
	 }while(fabs(x0-x1)>1e-5); 
	 printf("%f��ƽ������%f",a,x1);
}
