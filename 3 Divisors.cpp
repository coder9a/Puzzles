#include<stdio.h>
int main()
{
	int n,c=0,m;
	printf("Enter Number\n");
	scanf("%d",&n);
	int a[n]={0};
	int *p = a;
	for(int i=3;i<=n;i+=2)
	{
		p[i] = 1;
		for(int j=3;j<=n;j++)
        {
        	if(p[j] == 1)
        	{
        		for(int k=j*j;k<=n;k=k+j)
    	        {  
    	    	    p[k] = 0;
		        }	
			} 
	    }
    }
 p[1] = p[0] = 0;
 p[2] = 1;

for(m=0;m<=n;m++)
 {
	if(a[m]==0)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[m]%j == 0)
			{
				c++;
			}
		}
	}
 }  
if(c==3)
 {
	printf("%d ",m);
 } 
}
