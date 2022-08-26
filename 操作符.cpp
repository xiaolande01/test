#include <stdio.h>
//位操作符  &按位与 |按位或 ^按位异或
// 0表示假的 非0表示真的

//int main()
	///float a = 9 / 2.0;
	//printf("%f",a);
	//int a = 9 % 2;//取余数
	//printf("%d", a);
	//int a = 2;// int a是一个整形 一个整型=4个字节 一个字节=8个比特位
	//int  b = a <<1; 
	// printf("%d\n", b);
	// <<左移操作符--移动的为二进制位 
	//int a = 2;
	//a = a + 5;//a+=5;
	//printf("%d\n", a);
	/*int a =10;
	printf("%d\n", !a);*///！将a变成假 为0
	//！的用处 
//	int a = 1;
//	if (a)
//	{
//		//如果a为真 做事
//	};
//			
//	if (!a)
//	{
//		//如果a为假 做事
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(int));//srzeof 计算类型或者变量的大小 是一个操作符 求变量a可以省略后面的（）求类型int不可以 但是函数不可以省略
//	printf("%d\n", sizeof a);//结果都为4
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));// 10个元素 一个int 为4//计算的为数组的总大小 单位是字节
	printf("%d\n", sizeof(arr[0]));//为4
	int sz = sizeof(arr) / sizeof(arr[10]);
	printf("%d\n", sz);//计算数组个数 为10
	return 0;
}