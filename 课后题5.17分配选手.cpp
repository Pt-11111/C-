#include<stdio.h>
int main()
{   //BY Pt. 
	//比赛分配问题
	//A不和X比，C不和X,Z比
	char i,j,k;
	for(i='X';i<='Z';i++)//A对手 
	{
		for(j='X';j<='Z';j++)//B对手
		{
			if(i!=j)                     //前两个if确定三个选手不同 
			{
				for(k='X';k<='Z';k++)//C对手
				{
					if(k!=i&&k!=j)
					{
						if(i!='X'&&k!='X'&&k!='Z')   //最后一个if确定A不和X比，C不和XZ比 
						{
							printf("A->%c\nB->%c\nC->%c",i,j,k);
						}
					}
				}
			}
		}
	 } 
}
