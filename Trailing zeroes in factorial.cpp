#include<stdio.h>
#include<math.h>
int main()
{
	int n, c = 0;
	printf("Enter number\n");
	scanf("%d",&n);
	for(int i=5;i<=n;i=i*5)
	{
		if(n%i==0)
		{
			c = c + n/i;
		}
		else
		break;
	}
	printf("%d",c);
}
