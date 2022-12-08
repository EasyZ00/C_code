#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//设计函数，根据输入的数字，打印相应行数列数的乘法口诀表

//void print(int n)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= n; i++)//控制行数
//	{
//		for (j = 1; j <= i; j++)//控制列数
//		{
//			printf("%d*%d=%-2d ", j, i, j * i);// %-2d表示打印两位，不够的话用空格填充,-表示左对齐
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//}