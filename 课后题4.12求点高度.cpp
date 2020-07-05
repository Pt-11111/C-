 #include<stdio.h>
 #include<math.h>
 int main(){//BY Pt. 
 	int towerH=10;
 	int x,y;
 	double distance;
     printf("请输入两点坐标，格式(x,y)");
     scanf("(%d,%d)",&x,&y);//又忘取址符号，吃屎吧 
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
 		printf("该点高度：10m");
	 }else{
	 	printf("该点高度：0m");
	 }
 }
