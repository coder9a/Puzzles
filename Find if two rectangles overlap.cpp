#include<stdio.h>
#include<math.h>
bool Overlap(int r1[],int r2[]);
int main()
{
	int x,y,p=1;
	int r1[4], r2[4];
	printf("Enter first rectangle coordinates as x1, y1, x2, y2\n");
	for(int i=1;i<=4;i++)
	{
		scanf("%d",&r1[i]);
	}
	printf("Enter second rectangle coordinates as x1, y1, x2, y2\n");
	for(int i=1;i<=4;i++)
	{
		scanf("%d",&r2[i]);
	}
	if(Overlap(r1, r2))
	{
		printf("Rectangles Overlap");
	}
	else
	{
		printf("Rectangles dont't overlap");
	}
}

bool Overlap(int r1[],int r2[])
{
	if(r1[3]<=r2[1] || r2[3]<=r1[1])
	{
		return false;
	}
	if(r1[2]<=r2[4] || r2[2]<=r1[4])
	{
		return false;
	}
	return true;
}
