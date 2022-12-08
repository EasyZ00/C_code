#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//递归求n的k次方
double calcu(int n, int k)
{

	if (k == 0)
	{
		return 1.0;
	}
	else if(k>0)
	{
		return n * calcu(n, k - 1);
	}
	else
	{
		return 1 / calcu(n, -k);
	}
}
int main()
{
	int n,k = 0;
	scanf("%d", &n);
	scanf("%d", &k);
	printf("%lf", calcu(n,k));
	return 0;
}