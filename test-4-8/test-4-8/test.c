//#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//    int a = 10;//a���ڴ���Ҫ����ռ�--4���ֽ�
//    printf("%p\n", &a);//%p������ӡ��ַ��a�ĵ�ַȡ����a��4���ֽڵ����ֽڵ�ַ
//    int* pa = &a;//pa������ŵ�ַ����C������pa����ָ�����
//    //*˵��pa����������
//    //int ˵��paִ�еĶ�����int���͵�
//
//    char ch = 'w';
//    char* pc = &ch;
//    return 0;
//}

//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    *pa = 20;//�����ò��� *pa����ͨ��pa����ĵ�ַ�ҵ�a
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
//        //ָ��Ĵ�С����ͬ�Ķ���4�ֽ�
//        // ָ��Ĵ�С����ͬ��
//        //ָ����������ŵ�ַ��
//        //ָ����Ҫ���ռ䣬ȡ���ڵ�ַ�Ĵ�����Ҫ���ռ�
//        //32λ-4�ֽ�
//        //64λ-8�ֽ�
//        return 0;
//}


//�ṹ�������c���Դ����µ����ͳ���
//����һ��ѧ��
//struct Stu
//{
//    char name[20];
//    int age;
//    double score;
//};
////����һ���������
//struct Book
//{
//    char name[20];
//    float price;
//    char id[30];
//};
//int main()
//{
//    struct Stu s = { "����",20,85.5 };//�ṹ��Ĵ����ͳ�ʼ��
//    printf("1: %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//    struct Stu* ps = &s;
//    printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//    printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);
//    //�ṹ��ָ��->��Ա����
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
//    char ch = 'w';//���ڴ�����1���ֽڵĿռ���'w'
//    printf("%p\n", &a);//ȡ��ַ
//    char* pc = &ch;
//
//    int a = 10;//���ڴ�����4���ֽڵĿռ䣬���10�������
//    int* pa = &a;//��ַҲ��һ��ֵ�����Դ洢��pa������ - pa����ָ�����
//    *pa = 20;//�����ò�����
//    printf("%d\n", a);//20,ͨ���������ҵ�a��Ϊ20
//    return 0;
//}

//int mian()
//{
//    int a = 0x11223344;
//    int* pa = &a;
//    *pa = 0;//����4���ֽ�
//
//    char* pc = &a;
//    *pc = 0;//����1���ֽ�  ��Ϊint*ʱ�������ý��ĸ��ֽ����ݶ���Ϊ0����Ϊchar*ʱֻ�ı���һ���ֽڵ�����
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
//## Ұָ��
//
//���Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�����ȷ�ģ�
//
//### Ұָ�����
//
//** 1.ָ��δ��ʼ�� * *
//
//```c
//int main()
//{
//    int* p;//p��ָ�������Ҳ�Ǿֲ��������ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//    *p = 20;//���һ����ַ����p�У���p����Ÿ�20
//    return 0;
//}
//```
//
//** 2.ָ��Խ����� * *
//
//```c
//int main()
//{
//    int arr[10] = { 1,2,3,45,6,7,8,9,10 };//Խ�������
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i <= 10; i++)
//    {
//        *p = 0;
//        p++;//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//    }
//    return 0;
//}
//```
//
//** 3.ָ��ָ��Ŀռ��ͷ� * *
//
//```c
//int* test()
//{
//    int a = 10;//a�Ǿֲ�������������������������Ӧ�����٣�����֮ǰ����ַ����
//    //����a�ĵ�ַΪ0x0012ff44
//    return &a;
//}
//int main()
//{
//    int* p = test();//p����һ��Ұָ��
// //pָ��a�ĵ�ַ0x0012ff44��a�Ѿ������ˣ��Ƿ�����
//    return 0;
//}
//```
//
//** ��ι��Ұָ��**
//
//1.ָ���ʼ��
//
//```c
//int main()
//{
//    int a = 10;
//    int* p = &a;//��ʼ��
//    return 0;
//}
//```
//
//2.С��ָ��Խ��
//
//3.ָ��ָ��ռ��ͷż�ʱ��NULL
//
//4.ָ��ʹ��֮ǰ�����Ч��
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
//## ָ������

//1.ָ�� + -����

//�ٸ�����


//int main()
//{
//    char arr[] = { 'a','b','c','d' };
//    //0    1   2   3
//    char* p = arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%c\n", *(p + i);//p+0ָ���±�Ϊ0��λ��
//        //p+1ָ���±�Ϊ1��λ...p+3ָ���±�Ϊ3��λ��
//    }
    //��һ�ַ���     
   /*int i=0;
   for(i=0;i<4;i++)
   {
       printf("%c\n",*p++);
   }*/
   //    return 0;
   //}



   //ָ��-ָ��
   //int main()
   //{
   //    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
   //    printf("%d\n", &arr[9] - &arr[0]);
   //    return 0;
   //}



   //ָ��-ָ��ʵ���ַ�����������
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
   //���ַ���������һ�ַ���
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
   ///** 3.ָ��Ĺ�ϵ���㣨�Ƚϴ�С�� * *
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
   //    printf("%p\n", &arr[0]);//��ӡ��һ��Ԫ�صĵ�ַ
   //    //���󲿷�����£�����������������Ԫ�صĵ�ַ
   //    //����������������Ԫ�صĵ�ַ�������
   //    //1.&������
   //    //2.sizeof(������)
   //    return 0;
   //}

   //int main()
   //{
   //    int a = 10;
   //    int* pa = &a;
   //    int** ppa = &pa;//ppa���Ƕ���ָ�룬ppa�������pa�ĵ�ַ
   //    return 0;
   //
   //}
   //���ڶ���ָ������㣺

   //1��*ppaͨ����ppa�еĵ�ַ���н����ã������ҵ�����pa��*ppa��ʵ���ʵľ���pa
   //2��**ppa��ͨ��*ppa�ҵ�pa��Ȼ���pa���н����ò�����*pa���ҵ�����a��


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