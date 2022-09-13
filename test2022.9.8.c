#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	//数组-一组相同类型的的元素的集合
//	//数组是用下标来访问的
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组总大小，单位是字节
//	printf("%d\n", sizeof(arr[2]));
//	int sz = sizeof(arr) / sizeof(arr[2]);
//	printf("%d\n", sz);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	//if (a > b)
//	//	max = a;
//	//else 
//	//	max = b;
//	max = a > b ? a : b;//三目操作符
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2,c = a - 4,b = c + 1 );
//	//逗号表达式，是从左向右依次计算
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}

////static-静态的
////1.static修饰局部变量
////2.static修饰全局变量
////3.static修饰函数
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#define ADD(x,y) ((x)+(y))
////define定义常量与宏
//int main()
//{
//	printf("%d\n", 4* ADD(2, 3));
//	return 0;
//}

//int main()
//{
//
//	int a = 10;//a在地址中要分配空间的-4个字节
//	printf("%p\n", &a);//%p专门打印地址的
//
//	int* pa = &a; 
//	//	pa是用来存放地址的，在C语言中PA是指针变量
//		//  *表示pa是指针变量，int说明对象是int整型的
//	char ch = 'w';
//	char *pc = &ch;
//	return 0;
//}

//int main()
//{
//
//	int a = 10;
//	int* pa = &a;
//	* pa = 20;//*解引用操作，*pa就是通过a的地址，找到a
//	printf("%d\n", a);
//	printf("%d\n", sizeof(char*));
//	return 0;
//}