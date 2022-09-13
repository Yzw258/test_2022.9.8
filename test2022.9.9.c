#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////结构体可以让C语言创建新类型出来
////创建一个学生
//
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
////创建一个书的类型
//
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct stu s = { "张三",20,85.5 };//创建结构体和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量"."成员变量，
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3:%s %d %lf", ps->name, ps->age, ps->score);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i % 2 == 1)
//		printf("%d ", i);
//	}
//	return 0;
//}

//while循环中，break用作永久终止循环
//while循环中，continue的作用是跳过本次循环continue后面的代码
// 直接去判断部分，看是否执行下一次循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码（Y/N):>");
//	//getchar();//清理缓冲区，去掉/n
//	int tem = 0;
//	while ((tem=getchar())!='\n')//处理缓冲区多个字符
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch =='Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	//scanf("%d", &n);
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//计算n的阶乘之前要将ret初始化为1
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//在arr这个有序的数组中找k(7)的值
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		
//				left = mid + 1;
//		
//		
//		else if (arr[mid] > k)
//		 
//			right = mid - 1;
//		
//		else
//		{
//			printf("找到了,下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}

#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//两个字符串比较不能使用==，要使用strcmp;
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");
//		}
//	}
//		if (i == 3)
//		{
//			printf("密码错误三次，退出程序");
//		}
//	
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{//判断y是不是闰年
//		//能被4整除，不能被100整除是闰年
//		//能被400整除是闰年
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//
//	}
//	printf("\ncount:%d\n", count);
//	return 0;
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;//返回z，返回最大值
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//调用函数
//	int max = get_max(a, b);
//	printf("max=%d", max);
//	return 0;
//}

//void swap(int* pa, int* pb)//传址调用
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d ,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d ,b=%d\n", a, b);
//	return 0;
//}

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	     return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	//递归，函数自己调用自己；
//	print(num);
//	//print函数可以打印参数部分数字的每一位；
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1+my_strlen(str + 1);
//	else 
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	//模拟实现一个strlen函数；
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}//有些功能可以使用迭代的方法，也可以使用递归；
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}	
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}