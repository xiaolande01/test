#include <stdio.h>
#include <string.h>
//转义字符 转变了原来意思
// 字符用单引号 'a' %c
// 字符串用双引号 "abc"  %s
//  \n=换行
//  \?防止变成三字母词  ？？）=]
//  \t水平制表符(tab)
//   \\转义为一个\
//  \a 声音
//  8进制130=10进制88（0+24+64)  X的ASCII码值是88（同字母大小写对应ASCII码值不同！！！）
//  \ddd 表示ddd转为1~3个八进制； /xdd 表示xdd转为2个16进制
//8进制数字没有8

int main()
{
	//printf("d:\test 1-3");转移 \\t
	//printf("%c", '\'');    //'''打印不了
	//printf("%s", "abc");
	//printf("\a");
	//printf("%c\n", '\130');为X
	//printf("%d\n", '\101');//为65
	//printf("%c\n", '\101');//为A
	//printf("%d\n", '\x30');//为48   %d为字符'a'
	//printf("%d\n", strlen ("abc"));//3
	printf("%d\n", strlen("c:\test\328\test.c"));//14

	return 0;
}


