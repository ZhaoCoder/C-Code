#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct Book
//{
//    char name[20];
//    int price;
//};
//int main()
//{
//    struct Book a = { "C����",30 };
//    //�ṹ�����.��Ա����
//    printf("������%s  ���ۣ�%d\n", a.name, a.price);
//
//    struct Book* pb = &a;
//    //�ṹ��ָ��->��Ա����
//    printf("������%s  ���ۣ�%d\n", pb->name, pb->price);
//        return 0;
//}
//��������ʱ����������������ֵ����
//int main()
//{
//	int a = 1;
//	int b = 2;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d ,b=%d", a, b);
//	return 0;
//}
//��һ�������洢���ڴ��еĶ�������1�ĸ���
//int a=7;
//00000000000000000000000000000110
//123
//123%10  �õ�3
//123/10=12 ȥ��3
// %10 /10

//int count_one(int n)
//{
//    int count = 0;
//    while (n)//n�������0������������һ����1
//    {
//        if (n % 2 == 1)
//        {
//            count++;
//        }
//        n = n / 2;
//    }
//    return count;
//}
//int main()
//{
//    int a = 6;
//    int ret = count_one(a);
//    printf("%d\n", ret);
//    return 0;
//}

//int count_one(int n)
//{
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((n >> i) & 1) == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}

//int main()
//{
//    int a = -1;
//    //ԭ�룺10000000000000000000000001
//    //���룺11111111111111111111111110
//    //���룺11111111111111111111111111
//    //�ڴ��д���ǲ���
//    //��������ֺ�1��λ��
//    //11111111111111111111111111111111
//    //00000000000000000000000000000001
//    //00000000000000000000000000000001
//    //���һλΪ1�õ�1�����һλΪ0�õ�0
//    int ret = count_one(a);
//    printf("%d\n", ret);
//    return 0;
//}
//n=n&(n-1)
//ÿһ�ζ��ö��������������ұߵ�1��ʧ
//��n���0֮ǰ����n=n&(n-1)���������ִ��һ��count++
//n=7
//111-n
//110
//110-n
//101
//100-n
//011
//000-n
//int count_one(int n)
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int a = -1;
//    int ret = count_one(a);
//    printf("%d\n", ret);
//    return 0;
//}
