#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	//auto省略掉了 
	int  a = 10;//自动创建 自动销毁

	return 0;
}
exturn 是用来申明外部符号
register 寄存器关键字
int main()
{
	register int num = 100;//建议num的值存放在寄存器中

	return 0;
}
signed 有符号的
unsigned 无有符号的
typedef 类型重命名
/*typedef usigned int u_int;
int main()
{
	unsigned int num = 100
		u_int um2 = 100;

	return 0;
 }*/
 static -静态的   修饰局部变量 ；修饰全局变量；修饰函数
void test()
{
	static int a = 1;//局部变量
	a++;
	printf("%d ", a);
}
	int main()
	{
		int i = 0;
		while (i < 10)
		{
			test();
			i++;
		}
		return 0;
	}

int g_val = 20;
extern int g_val;
int main()
{
	printf("%d", g_val);
	return 0;
}
int add(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 3;
	int b = 4;
	int sum = add (a,  b);
	printf("%d ", sum);

	return 0;
}