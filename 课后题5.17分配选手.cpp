#include<stdio.h>
int main()
{   //BY Pt. 
	//������������
	//A����X�ȣ�C����X,Z��
	char i,j,k;
	for(i='X';i<='Z';i++)//A���� 
	{
		for(j='X';j<='Z';j++)//B����
		{
			if(i!=j)                     //ǰ����ifȷ������ѡ�ֲ�ͬ 
			{
				for(k='X';k<='Z';k++)//C����
				{
					if(k!=i&&k!=j)
					{
						if(i!='X'&&k!='X'&&k!='Z')   //���һ��ifȷ��A����X�ȣ�C����XZ�� 
						{
							printf("A->%c\nB->%c\nC->%c",i,j,k);
						}
					}
				}
			}
		}
	 } 
}
