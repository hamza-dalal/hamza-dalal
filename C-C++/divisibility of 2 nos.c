#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int x,y;
	printf("Enter any two integers\n");
	scanf("%d%d",&x,&y);
	if(x%y==0)
	{
		printf("%d is divisible by %d\n",x,y);
	}
	else
	{
		printf("%d is not divisible by %d\n",x,y);
	}
}
