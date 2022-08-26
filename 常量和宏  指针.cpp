#include <stdio.h>
#define add(X,Y)(X+Y)
int main()
{
	printf("%d", 4*add(3, 1));
	return 0;
}

int main()

{
	int a = 10;
	printf("%p\n", &a);//%p打印地址
	int* pa = &a;//pa是用来存放地址的，在C语言中叫指针变量
	//*说明pa是指针变量
	//int说明pa执行的对象是int类型
	char ch = 'w';
	char* pc = &ch;
	printf("%p", &ch);
	return 0;
}
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;//*解引用操作*pa就是通过pa里面的地址找到a
	printf("%d", a);
	return 0;
}
int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long *));
	printf("%d\n", sizeof(float*));
	//指针的大小都相同 为4 （32位平台）
	return 0;
}