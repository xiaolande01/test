
#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x * y;//这个可以改变多种运算 极为方便
//	return z;
//}
int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d%d", &num1, &num2);
//	//int sum =num1 + num2;
//	//函数：
//	int sum =Add(num1, num2);
//
//	printf("%d\n", sum);
//	return 0;
//}
//数组 
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d", arr[i]);
		i++;
	}

	
	//char ch[5] = { 'a','b','c' };//不完全初始化 剩余为0
	return 0;
}