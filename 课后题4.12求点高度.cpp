 #include<stdio.h>
 #include<math.h>
 int main(){//BY Pt. 
 	int towerH=10;
 	int x,y;
 	double distance;
     printf("�������������꣬��ʽ(x,y)");
     scanf("(%d,%d)",&x,&y);//����ȡַ���ţ���ʺ�� 
     if(x<0)
     {
     	x=-x;
	 }
	 if(y<0)
	 {
	 	y=-y;
	 }
 	distance=sqrt(pow((x-2),2)+pow((y-2),2));
 	if(distance<=1)
 	{
 		printf("�õ�߶ȣ�10m");
	 }else{
	 	printf("�õ�߶ȣ�0m");
	 }
 }
