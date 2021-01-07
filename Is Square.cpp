#include<stdio.h>
#include<math.h>
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	printf("Enter 4 coordiinates\n");
	scanf("x1 = %d\ny1 = %d\nx2 = %d\ny2 = %d\nx3 = %d\ny3 = %d\nx4 = %d\ny4 = %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	if((pow(x1-y1),2)==(pow(x2-y2),2)==(pow(x3-y3),2)==(pow(x4-y4),2))
	printf("Square");
	else
	printf("Not a square");
}
