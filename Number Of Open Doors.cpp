#include<stdio.h>
#include<math.h>
int main()
{
	int n,p,d,c=0;
	printf("Enter Number\n");
	scanf("%d",&n);
	p = d = n;
	int a[n] = {1};
	for(int i=1;i<=n;i++)  // Person
	{
		for(int j=1;j<=n;j++) // Door
		{
			if(j%i == 0)
			{
				if(a[j]==1)
				{
					a[j] = 0;
				}
				else
				{
					a[j] = 1;
				}
			}
		}
    }
    for(int k=1;k<=n;k++)
    {
    	if(a[k]==1)
    	{
    		printf("Close ");
		}
		else
		{
			printf(" Open");
		}
	}
}
