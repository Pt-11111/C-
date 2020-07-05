#include<stdio.h>
#include<math.h>
int main()
{//求一元二次方程的根 
	float a,b,c,p,q;
	printf("请输入a,b,c的值：");
	scanf("%f %f %f",&a,&b,&c);//格式啊格式，竟然写成了%d 
	float det=pow(b,2)-4*a*c;
	p=(-b)/2*a;
	q=sqrt(det)/2*a;
	if(det>=0)
	//printf("%f",b);
	printf("x1=%f x2=%f",p+q,p-q);  
}
