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
//	//����-һ����ͬ���͵ĵ�Ԫ�صļ���
//	//���������±������ʵ�
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//������������ܴ�С����λ���ֽ�
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
//	max = a > b ? a : b;//��Ŀ������
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2,c = a - 4,b = c + 1 );
//	//���ű��ʽ���Ǵ����������μ���
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
//}

////static-��̬��
////1.static���ξֲ�����
////2.static����ȫ�ֱ���
////3.static���κ���
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
////define���峣�����
//int main()
//{
//	printf("%d\n", 4* ADD(2, 3));
//	return 0;
//}

//int main()
//{
//
//	int a = 10;//a�ڵ�ַ��Ҫ����ռ��-4���ֽ�
//	printf("%p\n", &a);//%pר�Ŵ�ӡ��ַ��
//
//	int* pa = &a; 
//	//	pa��������ŵ�ַ�ģ���C������PA��ָ�����
//		//  *��ʾpa��ָ�������int˵��������int���͵�
//	char ch = 'w';
//	char *pc = &ch;
//	return 0;
//}

//int main()
//{
//
//	int a = 10;
//	int* pa = &a;
//	* pa = 20;//*�����ò�����*pa����ͨ��a�ĵ�ַ���ҵ�a
//	printf("%d\n", a);
//	printf("%d\n", sizeof(char*));
//	return 0;
//}