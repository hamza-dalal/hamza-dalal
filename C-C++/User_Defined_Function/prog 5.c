#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	int x,y;
	double abc();
	printf("Enter any two integers X & Y to find X^Y\n");
	scanf("%d%d",&x,&y);
	printf("X = %d\tY = %d\tX^Y = %d^%d = %0.4f\n",x,y,x,y,abc(x,y));
}
double abc(int x,int y)
{
	double p=1.0;
	if(y>=0)
	{
		while(y--)
		p=p*x;
	}
	else
	{
		while(y++)
		p=p/x;
	}
	return(p);
}
