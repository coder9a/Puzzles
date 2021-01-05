#include<stdio.h>
#include<math.h>
int swap(int a,int b);
int main()
{
	int d,m,m1,y;
	printf("Enter Date\n");
	scanf("%d",&d);
	printf("Enter Month\n");
	scanf("%d",&m);
	printf("Enter Year\n");
	scanf("%d",&y);
	// Month
	switch(m)
	{
		case 1: m1=3;
		break;
		case 2: if(y%400==0||y%4==0)
		m1=2;
		else
		m1=1;
		break;
		case 3: m1=3;
		break;
		case 4: m1=2;
		break;
		case 5: m1=3;
		break;
		case 6: m1=2;
		break;
		case 7: m1=3;
		break;
		case 8: m1=3;
		break;
		case 9: m1=2;
		break;
		case 10: m1=3;
		break;
		case 11: m1=2;
		break;
		case 12: m1=3;
		break;
		default: printf("Wrong Choice");
	}
	//date
	d = d%7;
	// year
	int x = y%100;
	x = x-1;
	int z = x/4;
	int a = z*2 + (x-z)*1;
	int b = a%7;
	// Centuary
	int c = y - y%100;
	int d1 = c/100;
		int e = d1%4;
	switch(e)
	{
		case 0: return 0;
			break;
		case 1: return 5;
			break;
		case 2: return 3;
			break;
		case 3: return 1;
			break;
	}
	
	int f ; 
	

}
