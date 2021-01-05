#include<stdio.h>
#include<math.h>
int main()
{
	int n,c=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		for(int j=1;j*j<=i;j++)
		{
			if(j*j == i)
			   c++;			
		}
    }
	printf("%d",c);
}
