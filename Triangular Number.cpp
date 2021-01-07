#include<stdio.h>
#include<math.h>
int main()
{
	int i, n, c=0;
	printf("Enter number\n");
	scanf("%d",&n);    
	for(i=1;i<=n;i++)
	{
		c = c+i;
		if(c==n)
		break;
	}
	if(c==n)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}
