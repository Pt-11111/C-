#include<stdio.h>
int main(){//BY Pt.
	 //ͳ�Ƹ����ַ�����
	 char arr[]=" My name is Pt 20161214040 @!#%#$&%^*";
	 int characters=0,trim=0,num=0,others=0;//�����ʼ�� 
	 for(int i=0;arr[i]!='\0';i++)
	 {printf("%d\n",i);
	 	if(arr[i]==' '){
	 		trim++;
		 }else if(arr[i]>='a'&&arr[i]<='z'||arr[i]>='A'&&arr[i]<='Z')
		 {
		 	characters++;
		 }
		 else if(arr[i]>='0'&&arr[i]<='9')
		 {
		 	num++;
		 }
		 else
		 {
		 	others++;
		 }	
	 }
	  
	  printf("��ĸ����Ϊ:%d\n�ո����Ϊ��%d\n���ָ���Ϊ��%d\n�����ַ�����Ϊ��%d",characters,trim,num,others);
}
