#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>



#include"add.h"//��������ʹ��֮ǰ

//int main()
//{
//    int a = 10; 
//    int b = 20;
//    int sum = 0;
//    //��������
//    sum = Add(a, b);
//    printf("%d\n", sum);
//    return 0;
//}
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));//printf�ķ���ֵ�Ǵ�ӡ����Ļ�ϵĸ���
//    return 0;
//}

//int main()
//{
//    int len = 0;
//    //1
//    len = strlen("abc");
//    printf("%d\n", len);
//    //2
//    printf("%d\n", strlen("abc"));
//    return 0;
//}

//void Add(int* p)
//{
//    (*p)++;
//}
//int main()
//{
//    int num = 0;
//    Add(&num);
//    printf("num=%d\n", num);
//    Add(&num);
//    printf("num=%d\n", num);
//    Add(&num); 
//    printf("num=%d\n",num);
//    return 0;
//}


                     //������arr��һ��ָ��
//int binary_search(int arr[], int k,int sz)//�β���ʵ����ĸһ����Ȼ����
//{
//	//���ʵ��
//	int left = 0;
//	
//	int right = sz;
//    
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷��أ���������±ꡣ�Ҳ����ķ���-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ���ָ�������֣��±��ǣ�%d\n", ret); 
//	}
//	return 0;
//}


//int is_leap_year(int  y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year); 
//		}
//	}
//	return 0;
//}


//����������1��������������0
//int is_prime(int n)
//{
//	int m;
//	for (m = 2; m <= sqrt(n); m++)
//	{
//		if (n % m == 0)
//			return 0;
//	 }
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����    
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//paָ�����
//	*pa = 20;//���� �ò���
//	printf("%d\n", a);
//	return 0; 
//}

//void Swap1(int x, int y)//�㷨һ����������� x,y�ĵ�ַ��a,b��һ�� ��������ֵʱ��void��
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int*pa,int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	//���ú�������ֵ���ã� ������ʵ�����βηֱ�ռ�ò�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//	//Swap1(a, b);
//	//���ú�������ַ���ã�  ���ִ��η�ʽ�����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڿ���ֱ�Ӳٿغ����ⲿ�ı���
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//���庯�� �������� ������ ��������
//int get_max(int x, int y)//��ʽ����
//{
//	
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//������ʹ��
//	int max=get_max(a,b);//ʵ�ʲ���
//	printf("max=%d\n", max);
//	return 0;
//}


//memset����
//memory -�ڴ� set-����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//strcpy����
//int main()
//{
//	char arr1[] = "bit";//�ַ����Դ�\nΪ������־
//	char arr2[20
// ] = "#############";
//	strcpy(arr2, arr1);//arr2���ĵ���������
//	printf("%s\n", arr2);
//	//strcpy-string copy�ַ�������
//	//strlen-string length�ַ�������
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}