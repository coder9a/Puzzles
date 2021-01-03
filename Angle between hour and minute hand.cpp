#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n, h,m;
	printf("Enter hours\n");
	scanf("%d",&h);
	printf("Enter minutes\n");
	scanf("%d",&m);
	int x = (11*m)/2 - 30*h;
	printf("%d",x); 
	getch();
}
