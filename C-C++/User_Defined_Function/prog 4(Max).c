#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,c,d,e;
	printf("Enter any three integers\n");
	scanf("%d%d%d",&a,&b,&c);
	d=max(a,b);
	e=max(d,c);
	system("cls");
	printf("Maximum of numbers %d,%d,%d is: %d\n",a,b,c,e);
}
max(int x, int y)
{
	if(x>=y)
	return(x);
	else
	return(y);
}
