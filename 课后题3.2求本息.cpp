#include<stdio.h>
#include<math.h>
#define MONEY 300000 
int main() {
	float P,r;
	int n;
	printf("30��\n");
	{
		//1,һ�δ������ڣ�r=0.0585
		//��ʽ��P=1000*(1+n*r);
		n=5;
		r=0.0300;
		P=MONEY*(1+n*r);
		printf("һ���Դ�5���ڱ�Ϣ��%f\n",P);
	}
	{
		//2,�ȴ������ٴ����꣬r2=0.0468��r3=0.054��
		//��ʽ��P=1000*(1+n*r);
		n=2;
		r=0.025;
		P=MONEY*(1+n*r);
		n=3;
		r=0.03;
		P=P*(1+n*r);
		printf("��2��3��%f\n",P);
	}
	{
		//3,�ȴ������ٴ����꣬r2=0.0468��r3=0.054��
		//��ʽ��P=1000*(1+n*r);
		n=3;
		r=0.03;
		P=MONEY*(1+n*r);
		n=2;
		r=0.025;
		P=P*(1+n*r);
		printf("��3��2��%f\n",P);
	}
       {
       	//���һ�꣬r1=0.0414
		    //P=1000*pow(1+r/4,n);
		    r=0.0203;
		    n=5;
		    P=MONEY*pow(1+r/4,n);
		    printf("�������һ��:%f\n",P);
			 
	   }
	   {
	   	r=0.0030;
	   	n=5;
	   	P= MONEY*pow(1+r/4,4*n);
	   	  printf("��������:%f\n",P); 
	   } 
	    
}
