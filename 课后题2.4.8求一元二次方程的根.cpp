#include<stdio.h>
#include<math.h>
int main()
{//��һԪ���η��̵ĸ� 
	float a,b,c,p,q;
	printf("������a,b,c��ֵ��");
	scanf("%f %f %f",&a,&b,&c);//��ʽ����ʽ����Ȼд����%d 
	float det=pow(b,2)-4*a*c;
	p=(-b)/2*a;
	q=sqrt(det)/2*a;
	if(det>=0)
	//printf("%f",b);
	printf("x1=%f x2=%f",p+q,p-q);  
}
