#include<stdio.h>//BY PT.
int main() {
	/*求m,n的最大公约数和最小公倍数
	   公约数求法有辗转相除法和辗转相减法。
	  判断条件都为0
	  最小公倍数=m*n/最大公约数 */
	int forDivide(int m,int n);
	int forCut(int m,int n) ;
	int m,n,pubnum1,pubnum2;
	printf("请输入两个整数");
	scanf("%d %d",&m,&n);
	pubnum1=forDivide(m,n);
	pubnum2=forCut(m,n);
	printf("辗转相除法最大公约数：%d\n",pubnum1);
	printf("更相减损术最大公约数：%d\n",pubnum2);
	printf("最小公倍数=m*n/最大公约数：%d",m*n/pubnum1);
 
}
//辗转相除法求最大公约数
int forDivide(int m,int n) {
	int check;
	do {
		check=m%n;
		m=n;
		n=check;
	} while(check!=0);
	return m;

}
//辗转相减法(又名更相减损术)求最大公约数
int forCut(int m,int n) {
	int check;
	do {
		if(m>n) {
			check=m-n;
		} else {
			check=n-m;

		}
		m=n;
		n=check;
	} while(check!=0);
	return m;
}
