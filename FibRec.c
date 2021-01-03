#include<stdio.h>

long long int fib(long long int n)
{
	if(n==0||n==1)
		return n;
	return fib(n-1)+fib(n-2);
}
int main()
{
	long long int n;
	scanf("%d",&n);
	printf("%d\n",fib(n));
	return 0;
}