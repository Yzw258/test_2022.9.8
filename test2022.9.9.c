#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////�ṹ�������C���Դ��������ͳ���
////����һ��ѧ��
//
//struct stu
//{
//	char name[20];
//	int age;
//	float score;
//};
////����һ���������
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
//	struct stu s = { "����",20,85.5 };//�����ṹ��ͳ�ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����"."��Ա������
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

//whileѭ���У�break����������ֹѭ��
//whileѭ���У�continue����������������ѭ��continue����Ĵ���
// ֱ��ȥ�жϲ��֣����Ƿ�ִ����һ��ѭ��
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
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N):>");
//	//getchar();//����������ȥ��/n
//	int tem = 0;
//	while ((tem=getchar())!='\n')//������������ַ�
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch =='Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
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
//		ret = 1;//����n�Ľ׳�֮ǰҪ��ret��ʼ��Ϊ1
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
//	//��arr����������������k(7)��ֵ
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
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
//			printf("�ҵ���,�±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���");
//	return 0;
//}

#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//�����ַ����Ƚϲ���ʹ��==��Ҫʹ��strcmp;
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//		if (i == 3)
//		{
//			printf("����������Σ��˳�����");
//		}
//	
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{//�ж�y�ǲ�������
//		//�ܱ�4���������ܱ�100����������
//		//�ܱ�400����������
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
//	return z;//����z���������ֵ
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú���
//	int max = get_max(a, b);
//	printf("max=%d", max);
//	return 0;
//}

//void swap(int* pa, int* pb)//��ַ����
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
//	//�ݹ飬�����Լ������Լ���
//	print(num);
//	//print�������Դ�ӡ�����������ֵ�ÿһλ��
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
//	//ģ��ʵ��һ��strlen������
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}//��Щ���ܿ���ʹ�õ����ķ�����Ҳ����ʹ�õݹ飻
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