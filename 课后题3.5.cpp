#include<stdio.h>
int main(){
	//使a=3,b=7,x=8.5,y=71.82,c1='A',c2='a';
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%db=%d",&a,&b);
	scanf("%f%e",&x,&y);
	scanf("%c%c",&c1,&c2);
	/*输入格式：
	a=3b=7
	8.5 7.182e1Aa
	*/
	printf("a=%d,b=%d,x=%.2e,y=%.2f,c1=%c,c2=%c",a,b,x,y,c1,c2); 
}
