#include<stdio.h>
int main(){//BY Pt.
	 //统计各类字符个数
	 char arr[]=" My name is Pt 20161214040 @!#%#$&%^*";
	 int characters=0,trim=0,num=0,others=0;//必须初始化 
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
	  
	  printf("字母个数为:%d\n空格个数为：%d\n数字个数为：%d\n其他字符个数为：%d",characters,trim,num,others);
}
