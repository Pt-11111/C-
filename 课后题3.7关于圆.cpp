#include<stdio.h>
# define PI 3.1415926
int main(){
	float r,h,length,area,qv,hv;
	printf("������뾶r="); 
	scanf("%f",&r);
	printf("������Բ����h=");
	scanf("%f",&h);
	length=4*PI*r;
	area=PI*r*r;
	qv=4/3*PI*r*r*r;
	hv=area*h;
	printf("%.2f= %.2f %.2f %.2f",length,area,qv,hv);
	 
}
