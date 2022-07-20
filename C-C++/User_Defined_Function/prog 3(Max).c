#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,c;
	system("cls");
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	c=max(a,b);
	printf("Maximum of %d and %d is %d\n",a,b,c);
}
max(int x,int y)
{
	if(x>=y)
	{
		return(x);
	}
	else
	{
		return(y);
	}
}
