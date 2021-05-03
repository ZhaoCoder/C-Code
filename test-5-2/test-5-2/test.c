#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct Book
//{
//    char name[20];
//    int price;
//};
//int main()
//{
//    struct Book a = { "C语言",30 };
//    //结构体变量.成员变量
//    printf("书名：%s  定价：%d\n", a.name, a.price);
//
//    struct Book* pb = &a;
//    //结构体指针->成员变量
//    printf("书名：%s  定价：%d\n", pb->name, pb->price);
//        return 0;
//}
//不借助临时变量将两个变量的值交换
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
//求一个整数存储在内存中的二进制中1的个数
//int a=7;
//00000000000000000000000000000110
//123
//123%10  得到3
//123/10=12 去掉3
// %10 /10

//int count_one(int n)
//{
//    int count = 0;
//    while (n)//n如果不是0，二进制序列一定有1
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
//    //原码：10000000000000000000000001
//    //反码：11111111111111111111111110
//    //补码：11111111111111111111111111
//    //内存中存的是补码
//    //让这个数字和1按位与
//    //11111111111111111111111111111111
//    //00000000000000000000000000000001
//    //00000000000000000000000000000001
//    //最后一位为1得到1，最后一位为0得到0
//    int ret = count_one(a);
//    printf("%d\n", ret);
//    return 0;
//}
//n=n&(n-1)
//每一次都让二进制序列中最右边的1消失
//在n变成0之前，让n=n&(n-1)，这个操作执行一次count++
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
