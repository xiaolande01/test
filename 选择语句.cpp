#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 

int main()
{
	int input = 0;
	printf("要好好学习吗(1/0)?>:");
	scanf_s("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("卖红薯");






	return 0;
}