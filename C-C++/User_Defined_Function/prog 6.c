#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int x=20,y;
	y=temp(x);
	printf("%d\t%d\n",x,y);
}
temp(int q)
{
	q=q+7;
	return(q);
}
