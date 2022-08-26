#include <stdio.h>
//  ~按(二进制）位取反  1变成0 0变成1
//  负数的计算方式   -1的源码：10000000000000000000000000000001（32个比特位）
//                       反码：11111111111111111111111111111110（符号1不变 0与1交换）
//                       补码：11111111111111111111111111111111(反码+1）//内存中存储补码
//正整数源码反码补码都相同
//int main()
//{
//	int a = 0;
//	printf("%d", ~a);//为-1   a+1的相反数
//		return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++  先++后使用
//	printf("%d\n", b);//  11
//	printf("%d\n", a);//  11
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++  先使用 再++
//	printf("%d\n", b);//  10
//	printf("%d\n", a);//  11
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	printf("%d", a);   为3
//
//return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*if (a && b)    &&是并且 ||是或者  &是取地址
//		(
//
//			)*/
//	int c = a && b;
//	printf("%d", c);   //结果为1 表示真
//
//		return 0;
//}
int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	/*if (a > b)
		max = a;
	else
		max = b;*/
	max= a > b ? a : b;//三目操作符
	printf("%d", max);
	return 0;
}
//()函数调用操作符  []下标引用操作符   