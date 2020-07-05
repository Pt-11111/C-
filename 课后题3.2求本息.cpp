#include<stdio.h>
#include<math.h>
#define MONEY 300000 
int main() {
	float P,r;
	int n;
	printf("30万\n");
	{
		//1,一次存五年期，r=0.0585
		//公式：P=1000*(1+n*r);
		n=5;
		r=0.0300;
		P=MONEY*(1+n*r);
		printf("一次性存5年期本息：%f\n",P);
	}
	{
		//2,先存两年再存三年，r2=0.0468，r3=0.054，
		//公式：P=1000*(1+n*r);
		n=2;
		r=0.025;
		P=MONEY*(1+n*r);
		n=3;
		r=0.03;
		P=P*(1+n*r);
		printf("先2后3：%f\n",P);
	}
	{
		//3,先存三年再存两年，r2=0.0468，r3=0.054，
		//公式：P=1000*(1+n*r);
		n=3;
		r=0.03;
		P=MONEY*(1+n*r);
		n=2;
		r=0.025;
		P=P*(1+n*r);
		printf("先3后2：%f\n",P);
	}
       {
       	//五个一年，r1=0.0414
		    //P=1000*pow(1+r/4,n);
		    r=0.0203;
		    n=5;
		    P=MONEY*pow(1+r/4,n);
		    printf("连续五个一年:%f\n",P);
			 
	   }
	   {
	   	r=0.0030;
	   	n=5;
	   	P= MONEY*pow(1+r/4,4*n);
	   	  printf("活期五年:%f\n",P); 
	   } 
	    
}
