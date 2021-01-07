#include<stdio.h>
#include<math.h>
int swap(int a,int b);
int main()
{
	int n,r,c,x;
	printf("Enter rows\n");
	scanf("%d",&r);
	printf("Enter Columns\n");
	scanf("%d",&c);
	if(c<r)
	{
		swap(r,c);
	}
	x = (r*(r+1)*(2*r+1))/6 + (c-r)*(r*(r+1)/2);
	printf("%d",x);
}
int swap(int a, int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	return(a,b);
}
