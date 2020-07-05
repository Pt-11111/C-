#include<stdio.h>
#include<math.h> 
int main(){
	//BY Pt.
	//用迭代法求x=sqrt(a); a是要输入得数
	 float a,x0,x1;
	 printf("请输入一个大于等于零的数：");
	 scanf("%f",&a);
	 x0=0.1;//x0可以等于大于零的任何数 
	 x1=(x0+a/x0)/2;
	 do{
	 	x0=x1;
	 	x1=(x0+a/x0)/2;
	 }while(fabs(x0-x1)>1e-5); 
	 printf("%f的平方根是%f",a,x1);
}
