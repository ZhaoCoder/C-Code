//#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//    int a = 10;//a在内存中要分配空间--4个字节
//    printf("%p\n", &a);//%p用来打印地址，a的地址取的是a的4个字节的首字节地址
//    int* pa = &a;//pa用来存放地址，在C语言中pa叫做指针变量
//    //*说明pa是真正变量
//    //int 说明pa执行的对象是int类型的
//
//    char ch = 'w';
//    char* pc = &ch;
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    *pa = 20;//解引用操作 *pa就是通过pa里面的地址找到a
//    printf("%d\n", a);
//    return 0;
//}

//int main()
//{
//    printf("%d\n", sizeof(char*));
//    printf("%d\n", sizeof(int*));
//    printf("%d\n", sizeof(long*));
//    printf("%d\n", sizeof(long long*));
//    printf("%d\n", sizeof(short*));
//    printf("%d\n", sizeof(double*));
//        //指针的大小是相同的都是4字节
//        // 指针的大小是相同的
//        //指针是用来存放地址的
//        //指针需要多大空间，取决于地址的储存需要多大空间
//        //32位-4字节
//        //64位-8字节
//        return 0;
//}


//结构体可以让c语言创建新的类型出来
//创建一个学生
//struct Stu
//{
//    char name[20];
//    int age;
//    double score;
//};
////创建一个书的类型
//struct Book
//{
//    char name[20];
//    float price;
//    char id[30];
//};
//int main()
//{
//    struct Stu s = { "张三",20,85.5 };//结构体的创建和初始化
//    printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//    struct Stu* ps = &s;
//    printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//    printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
//    //结构体指针->成员变量
//    return 0;
//}

//#include<stdio.h>
/*#include*/


//int main()
//{
//    int M = 0;
//    scanf("%d", &M);
//    M % 5 == 0 && M>=1 &&M<= 100000 ? printf("YES") : printf("NO");
//    return 0;
//}
//
//int main()
//{
//    char ch = 'w';//向内存申请1个字节的空间存放'w'
//    printf("%p\n", &a);//取地址
//    char* pc = &ch;
//
//    int a = 10;//向内存申请4个字节的空间，存放10这个数字
//    int* pa = &a;//地址也是一个值，可以存储到pa变量中 - pa就是指针变量
//    *pa = 20;//解引用操作符
//    printf("%d\n", a);//20,通过解引用找到a改为20
//    return 0;
//}

//int mian()
//{
//    int a = 0x11223344;
//    int* pa = &a;
//    *pa = 0;//访问4个字节
//
//    char* pc = &a;
//    *pc = 0;//访问1个字节  当为int*时，解引用将四个字节内容都改为0；当为char*时只改变了一个字节的内容
//    return 0;
//}
//int main()
//{
//    int a = 0x11223344;
//    int* pa = &a;
//    char* pc = &a;
//    printf("pa:%p\n", pa);
//    printf("pa+1:%p\n", pa + 1);
//
//    printf("pc:%p\n", pc);
//    printf("pc+1:%p\n", pc + 1);
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int* pa = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", *(pa + i));
//    }
//    return 0;
//}

//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    char* pa = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", *(pa + i));
//    }
//    return 0;
//}
//## 野指针
//
//概念：野指针就是指针指向的位置是不可知的（随机的、不明确的、不正确的）
//
//### 野指针成因
//
//** 1.指针未初始化 * *
//
//```c
//int main()
//{
//    int* p;//p是指针变量，也是局部变量，局部变量指针未初始化，默认为随机值
//    *p = 20;//随机一个地址放在p中，给p里面放个20
//    return 0;
//}
//```
//
//** 2.指针越界访问 * *
//
//```c
//int main()
//{
//    int arr[10] = { 1,2,3,45,6,7,8,9,10 };//越界访问了
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 10; i++)
//    {
//        *p = 0;
//        p++;//当指针指向的范围超过数组arr的范围时，p就是野指针
//    }
//    return 0;
//}
//```
//
//** 3.指针指向的空间释放 * *
//
//```c
//int* test()
//{
//    int a = 10;//a是局部变量，进函数创建，出函数应该销毁，销毁之前将地址返回
//    //假设a的地址为0x0012ff44
//    return &a;
//}
//int main()
//{
//    int* p = test();//p就是一个野指针
// //p指向a的地址0x0012ff44，a已经销毁了，非法访问
//    return 0;
//}
//```
//
//** 如何规避野指针**
//
//1.指针初始化
//
//```c
//int main()
//{
//    int a = 10;
//    int* p = &a;//初始化
//    return 0;
//}
//```
//
//2.小心指针越界
//
//3.指针指向空间释放及时置NULL
//
//4.指针使用之前检查有效性
//
//
//int main()
//{
//    int* p = NULL;
//    if (p != NULL)
//    {
//        *p = 20;
//    }
//    return 0;
//}
//## 指针运算

//1.指针 + -整数

//举个例子


//int main()
//{
//    char arr[] = { 'a','b','c','d' };
//    //0    1   2   3
//    char* p = arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%c\n", *(p + i);//p+0指向下标为0的位置
//        //p+1指向下标为1的位...p+3指向下标为3的位置
//    }
    //另一种方法     
   /*int i=0;
   for(i=0;i<4;i++)
   {
       printf("%c\n",*p++);
   }*/
   //    return 0;
   //}



   //指针-指针
   //int main()
   //{
   //    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
   //    printf("%d\n", &arr[9] - &arr[0]);
   //    return 0;
   //}



   //指针-指针实现字符串个数计算
   //int my_strlen(char* str)
   //{
   //    char* start = str;
   //    while (*str != '\0')
   //    {
   //        str++;
   //    }
   //    return str - start;
   //}
   //int main()
   //{
   //    char arr[] = "abcdef";
   //    int len = my_strlen(arr);
   //    printf("%d\n", len);//6
   //    return 0;
   //}
   //求字符串长度另一种方法
   //int my_strlen(char* str)
   //{
   //    int count = 0;
   //    while (*str != '\0')
   //    {
   //        count++;
   //        str++;
   //    }
   //    return count;
   //}
   //int main()
   //{
   //    char arr[] = "abc";
   //    int len = my_strlen(arr);
   //    printf("%d\n", len);
   //    return 0;
   //}
   ///** 3.指针的关系运算（比较大小） * *
   // int main()
   //{
   //    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
   //    int i = 0;
   //    for (i = 0; i < 10; i++)
   //    {
   //        printf("%p\n", &arr[i]);
   //    }
   //}

   //#define N_VALUES 5
   //int main()
   //{
   //    float values[N_VALUES];
   //    float* vp;
   //    for (vp = &values[N_VALUES]; vp > & values[0];)
   //    {
   //        *--vp = 0;
   //    }
   //}

   //#define N_VALUES 5
   //int main()
   //{
   //    float values[N_VALUES];
   //    float* vp;
   //    for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
   //    {
   //        *vp = 0;
   //    }
   //}

   //int main()
   //{
   //    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
   //    int* p = arr;
   //    int i = 0;
   //    for (i = 0; i < 10; i++)
   //    {
   //        printf("%d", *(p + i));
   //    }
   //    printf("%p\n", arr);
   //    printf("%p\n", &arr[0]);//打印第一个元素的地址
   //    //绝大部分情况下：数组名就是数组首元素的地址
   //    //数组名不是数组首元素的地址的情况：
   //    //1.&数组名
   //    //2.sizeof(数组名)
   //    return 0;
   //}

   //int main()
   //{
   //    int a = 10;
   //    int* pa = &a;
   //    int** ppa = &pa;//ppa就是二级指针，ppa用来存放pa的地址
   //    return 0;
   //
   //}
   //对于二级指针的运算：

   //1、*ppa通过对ppa中的地址进行解引用，这样找到的是pa，*ppa其实访问的就是pa
   //2、**ppa先通过*ppa找到pa，然后对pa进行解引用操作：*pa，找到的是a。


   //int main()
   //{
   //    int a = 10;
   //    int b = 20;
   //    int c = 30;
   //    int* arr[5] = { &a,&b,&c };
   //    int i = 0;
   //    for (i = 0; i < 3; i++)
   //    {
   //        printf("%d", *(arr[i]));
   //    }
   //    return 0;
   //}