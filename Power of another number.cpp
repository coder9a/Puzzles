#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,p=1;
	printf("Enter first number (smaller)\n");
	scanf("%d",&x);
	printf("Enter second number\n");
	scanf("%d",&y);
	if(y==1)
	{
	    printf("1");
	}
	while(p<y)
	{
	    p=p*x;
	} 
	if(p==y)
	{
	    printf("1");
	}
	else
	{
	    printf("0");
	}
}
