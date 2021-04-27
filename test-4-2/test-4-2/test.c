#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//变量的作用域
//int main()
//{
//    printf("hehe\n");
//    {
//        int a = 10;
//        printf("a=%d\n", a);//可以打印
//    }
//    //printf("a=%d\n", a);//报错，无法打印
//
//    return 0;
//}


//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
//int main()
//{
//    { 
//        int a = 10; 
//        printf("%d\n", a);
//    } 
//    //printf("%d\n", a);
//    //生命周期已结束，会报错       
//    return 0;
//}
//
//
////常量
//int main()
//{
//    //1、字面常量
//    3.14;
//    10;
//    'a';
//    "abcdef";
//    return 0;
//    
//    //2、const修饰的常变量
//    int num = 10;//变量
//    num = 20;
//    print("num=%d\n", num);//20
//
//    const int num = 10;//num为常变量-具有常属性
//    num = 20;
//    print("num=%d\n", num);//这里会报错
//
//    int arr[10] = { 0 };//10个元素
//        const int n = 10;
//    //int arr2[n] = { 0 };//n是变量的，这里不行，本质上是变量，只是具有了常属性
//   
//    //3、#define定义的标识符常量
//    #define MAX 100;
//    int n = MAX;
//    printf("%d\n", n);
//    
//    //4、枚举常量
//    //可以一一列举的常量
//    //性别
//    enum Sex
//    {
//        //这种枚举类型的变量的未来可能取值
//        MALE,
//        FEMALE,
//        SECRET
//    };
//    enum Sex s = MALE;
//    printf("%d\n", MALE);//0
//    printf("%d\n", FEMALE);//1
//    printf("%d\n", SECRET);//2
//}
//
//
//字符串
int main()
{
    //字符数组--数组是一组同类型的元素
    //字符串在结尾的位置隐藏了一个\0的字符
    //\0是字符串结束的标志
    char arr[] = "hello world";

    char arr1[] = "abc";
    char arr2[] = { 'a','b','c' };

    //打印字符串
    printf("%s\n", arr1);//abc
    printf("%s\n", arr2);//打印了乱码，因为没有结束标志

    //求字符串的长度
    int len = strlen("abc");
    printf("%d\n", len);//3  strlen需要头文件#include<string.h>
    //\0仅仅是结束标志，不计入字符串长度
    //求字符串的长度
    printf("%d\n", strlen(arr1));//3
    printf("%d\n", strlen(arr2));//打印随机值,因为没有结束标志\0
    return 0;
}
//
//
////转义字符
////转变了这个字符原有的字符
//
////假如我们在屏幕上打印c : \test\test.c
//int main()
//{
//    printf("c:\test\test.c");//打印结果为c:	   est		est.c
//    //程序会译为\t水平制表符
//    printf("c:\\test\\test.c");//打印结果为c:\test\test.c
//    //printf("(are you ok??)");??)--会打印成]--三字母词
//    printf("%c\n", '\'');//打印'
//    printf("%c\n", '\130');//X
//    //'\加三位8进制数字'--\ddd---转义字符，打印为三位8进制数字转换成10进制数所对应的ASCII值
//    printf("%c\n", '\x30');//48-'0'
//    //\xdd--这里dd为16进制数
//    return 0;
//}
//
////注释
////注释是用来解释复杂代码的
//int main()
//{
//    //int a=10;//c++注释风格
//    /*
//    int b=0;
//    */
//    //c语言的注释风格---不支持嵌套注释
//    return 0;
//}

//选择语句
//int main()
//{
//    int input = 0;//输入的值
//    printf("你要好好学习吗？(1/0)>：");
//    scanf("%d", &input);
//    if (input == 1)
//    {
//        printf("好offer\n");
//    }
//    else
//    {
//        printf("回家卖红薯\n");
//    }
//    return 0;
//}
//
////循环语句
//int main()
//{
//    int line = 0;
//    while (line < 30000)
//    {
//        printf("写代码\n", line);
//        line++;
//    }
//    if (line == 30000)
//    {
//        printf("好offer\n");
//    }
//    return 0;
//}
//
////函数
////不用函数时的代码
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    scanf("%d%d", & num1, &num2);
//    int sum = num1 + num2;
//    printf("%d", &num1, &num2);
//
//}
////int sum=num1+num2;
//    //函数的方式解决
//Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    scanf("%d%d", & num1, &num2);
//    int sum = Add(num1, num2);
//    printf("%d\n", sum);
//    return 0;
//}
//
////数组
//int main()
//{
//    //int a=0;
//    //int b=1;
//    //int c=2;
//    //int d=3;
//    //...
//    //引入数组
//    int arr[10] = { 1,2,3,4,5,6,7,7,8,9,10 };
//    //开辟了一段空间，存放了1，2，...,10,第一个元素下标为0，以此类推，第n个数字的下标为n-1
//    char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//    return 0;
//}
//
////操作符
////1、算术操作符： + ， - ， * ， / ， %
//    int a = 9 / 2;//4
//    float a = 9 / 2.0;//4.500000
//    int a = 9 % 2;//%--取余
////2、移位操作符： << , >>
//    int main()
//    {
//        int a = 2;
//        int b = a << 1;
//        printf("%d\n", b);//左移操作符--移动的是二进制位，a-2
//        return 0;
//    }
//    //3、位操作符： & (按位与)， | (按位或)， ^ (按位异或)
//    //4、赋值操作符： = += -= *= /= &= ^= |= >>= <<=
//    //5、双目操作符：a + b； + 有两个操作数，a和b，为双目操作符
//    //6、单目操作符：只有一个操作数
//    //！逻辑反
//    int main()
//    {
//        //0表示假，非0表示真
//        if (a)
//        {
//            //如果a为真，做事
//        }
//        if(!a)
//        {
//            //如果a为假，做事
//
//            return 0;
//        }
//    }
//    //sizeof操作符
//    int main()
//    {
//        //sizeof是一个操作数
//        //计算类型或者变量的大小
//        int a = 0;
//        printf("%d", sizeof(a));
//        printf("%d", sizeof(int));//求变量大小是括号可省略，求函数或者数据类型大小时不可以
//        return 0;
//    }