#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int  main()
//{
//	//����p�ͳ�Ϊһ��Ұָ��
//	int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ�������ֵ
//	* p = 20;//�Ƿ������ڴ�
//	return 0;
//}
//Խ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 10; i++)
//	{
//		*p=0;
//		p++;//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;//����ȥ��a���ͷ�
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//*p��aʱ�����ռ��Ѿ�����������
//	return 0;
//}
#include<string.h>
//����������
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
//�ݹ�ķ���
//4.�ݹ����ַ�������
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
//ָ��-ָ��ķ���

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
//	//strlen();//���ַ�������
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
//	int arr[10];//��������--������ε�����
//	char ch[10];//�ַ�����--����ַ�������
//	int* parr[5];//�������ָ������� ������Ϊparr  Ԫ������Ϊint*
//	return 0;
//}
//int main()
//{
//	typedef int i;
//	i a = 0;
//	//printf("%d\n", a);
//}