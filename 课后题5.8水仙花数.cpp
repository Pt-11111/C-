#include<stdio.h>
#include<math.h>
int main() {
	//BY Pt.
	//��ˮ�ɻ�����������һ����λ������100-999
	//�Ϳκ��ⲻͬ������֪��λ��
	//ÿλ������Ժ���
	int num=0,multy,temp=0;
	for(int i=100; i<=999; i++) {
		temp=i;
		for(int j=2; j>=0; j--) {//��֪��λ�� 
			num=temp/pow(10,j);//������λ 
			multy=multy+pow(num,3);//�����λ�����Ӻ� 
			temp=temp-(num*pow(10,j));//ɾȥ���λ   
		}
		if(i==multy) { //multy=0���ܷ���if�У���Ϊ������ÿ�ζ�ִ�У����ԾͲ�����ִ��
			printf("\n%d\n",multy);
			//multy=0;//Ӧ�÷���if����
		}
		multy=0;
	}
	return 0;
}
