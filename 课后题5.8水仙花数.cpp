#include<stdio.h>
#include<math.h>
int main() {
	//BY Pt.
	//求水仙花数，首先是一个三位数，即100-999
	//和课后题不同的是已知三位数
	//每位数字相对好算
	int num=0,multy,temp=0;
	for(int i=100; i<=999; i++) {
		temp=i;
		for(int j=2; j>=0; j--) {//已知三位数 
			num=temp/pow(10,j);//获得最高位 
			multy=multy+pow(num,3);//将最高位立方加和 
			temp=temp-(num*pow(10,j));//删去最高位   
		}
		if(i==multy) { //multy=0不能放在if中，因为它不是每次都执行，所以就不可能执行
			printf("\n%d\n",multy);
			//multy=0;//应该放在if外面
		}
		multy=0;
	}
	return 0;
}
