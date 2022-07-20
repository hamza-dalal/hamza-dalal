#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int x,i,r=1;
	clrscr();
	printf("Enter any positive integer\n");
	scanf("%d",&x);
	for(i=2;i<=x/2;++i)
	{
		if(x%i==0)
		{
			r=0;
			break;
		}
	}
	if(r==1)
	{
		printf("%d is a prime number\n",x);
	}
	else
	{
		printf("%d is not a prime number\n",x);
	}
}
