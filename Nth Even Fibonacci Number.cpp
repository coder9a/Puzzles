#include<stdio.h>
#include<math.h>
int fib(int n);
int main()
{
	int n, x;
	printf("Enter number\n");
	scanf("%d",&n);    
    x = fib(n);
	printf("%d",x);
}
int fib(int n)
{
	if(n==1)
	{
		return 2;
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		return 4*fib(n-1) + fib(n-2); 
	} 

}
