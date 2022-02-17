


#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);
	}
	return 0;
}



////求第n个斐波那契数列，不用递归，用循环
//#include<stdio.h>
//
//int hac(int n)
//{
//	int a=1,b=1,c=1;
//	while(n>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n;
//	int ret;
//	scanf("%d",&n);
//	ret=hac(n);
//	printf("%d\n",ret);
//	return 0;
//}





//第n个斐波那契数列   递归
//#include<stdio.h>
//
//int hac(int n)
//{
//	if(n<=2)
//		return 1;
//	else
//		return hac(n-1)+hac(n-2);
//}
//
//int main()
//{
//	int n=0;
//	int ret=0;
//	scanf("%d",&n);
//	
//	ret = hac(n);
//	printf("%d",ret);
//	return 0;
//}



////递归求字符串长度
//#include<stdio.h>
//
//int mylen(char* str)
//{
//	if(*str!='\0')
//		return 1+mylen(str+1);
//	else
//		return 0;
//	
//}

//int mylen(char* str)
//{
//	int count = 0;
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	
//		return count;
//}

//int  main()
//{
//	char arr[]="bit";
//	int len = mylen(arr);
//	printf("len = %d",len);
//	return 0;
//}


//#include<stdio.h>
//#include "add.h"
//int main()
//{
//	int a=10,b=20;
//	int sum=add(a,b);
//	printf("%d",sum);
//	return 0;
//}