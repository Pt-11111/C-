#include<stdio.h>
#include<math.h>
int main(){
	double m;
	double d=300000,p=6000,r=0.01;
	m=(log(p)-log(p-d*r))/log(1+r);
	printf("������ʮ����Ҫ%.1lf���»���",m);
}
