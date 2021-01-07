#include<stdio.h>
#include<math.h>
int fib(int n);
int main()
{
	int n, x, y;
	printf("Enter number\n");
	scanf("%d",&n);
	n = n%300;
	x = fib(n);
	y = x%100;
	printf("%d",y);
}
int fib(int n)
{
	if(n==0||n==1)
	return n;
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
