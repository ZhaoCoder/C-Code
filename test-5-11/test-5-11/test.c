#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int  main()
//{
//	//这里p就称为一个野指针
//	int* p;//p是一个局部的指针变量，局部变量不初始化是随机值
//	* p = 20;//非法访问内存
//	return 0;
//}
//越界访问
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 10; i++)
//	{
//		*p=0;
//		p++;//当指针指向的范围超过数组arr的范围时，p就是野指针
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;//返回去后，a被释放
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//*p找a时，这块空间已经不属于它了
//	return 0;
//}
#include<string.h>
//计数器方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归的方法
//4.递归求字符串长度
//int my_strlen(char* str)
//{
//    while (*str != '\0')
//    {
//        return 1 + my_strlen(str + 1);
//    }
//    return 0;
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int len = my_strlen(arr);
//    printf("%d\n", len);//6
//    return 0;
//}
//指针-指针的方法

//my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//strlen();//求字符串长度
//	char arr[] = "abc";
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	printf("%d\n", p[2]);//p[2]-->*(p+2)
//	printf("%d\n", 2[arr]);
//	//arr[2]-->*(arr+2)-->*(2+arr)-->2[arr]
//
//	//arr[2]<==>*(arr+2)<==>*(p+2)<==>*(2+p)<==>*(2+arr)==2[arr]
//	//*(2 + arr) == 2[arr]
//	return 0;
//}

//int main()
//{
//	int arr[10];//整形数组--存放整形的数组
//	char ch[10];//字符数组--存放字符的数组
//	int* parr[5];//存放整形指针的数组 数组名为parr  元素类型为int*
//	return 0;
//}
//int main()
//{
//	typedef int i;
//	i a = 0;
//	//printf("%d\n", a);
//}