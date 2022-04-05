#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>



#include"add.h"//声明放在使用之前

//int main()
//{
//    int a = 10; 
//    int b = 20;
//    int sum = 0;
//    //函数调用
//    sum = Add(a, b);
//    printf("%d\n", sum);
//    return 0;
//}
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));//printf的返回值是打印在屏幕上的个数
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


                     //本质上arr是一个指针
//int binary_search(int arr[], int k,int sz)//形参与实参字母一样依然可以
//{
//	//算的实现
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
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回，这个数的下标。找不到的返回-1
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了指定的数字，下标是：%d\n", ret); 
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


//是素数返回1，不是素数返回0
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
//		//判断i是否为素数    
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引 用操作
//	printf("%d\n", a);
//	return 0; 
//}

//void Swap1(int x, int y)//算法一不能完成任务 x,y的地址与a,b不一样 （不返回值时用void）
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
//	//调用函数（传值调用） 函数的实参与形参分别占用不同的内存块，对形参的修改不会影响实参。
//	//Swap1(a, b);
//	//调用函数（传址调用）  这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内可以直接操控函数外部的变量
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


//定义函数 函数类型 函数名 函数参数
//int get_max(int x, int y)//形式参数
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
//	//函数的使用
//	int max=get_max(a,b);//实际参数
//	printf("max=%d\n", max);
//	return 0;
//}


//memset函数
//memory -内存 set-设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//strcpy函数
//int main()
//{
//	char arr1[] = "bit";//字符串自带\n为结束标志
//	char arr2[20
// ] = "#############";
//	strcpy(arr2, arr1);//arr2的文档将被覆盖
//	printf("%s\n", arr2);
//	//strcpy-string copy字符串拷贝
//	//strlen-string length字符串长度
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