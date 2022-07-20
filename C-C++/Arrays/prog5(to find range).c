#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int n,i;
	float x[75],max=-9999.0,min=9999.0,Range;
	printf("Enter no. of Observations\n");
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		printf("Enter any Observations\n");
		scanf("%f",&x[i]);
		if(max<=x[i])
		{
			max=x[i];
		}
		if(min>=x[i])
		{
			min=x[i];
		}
	}
	system("cls");
	Range=max-min;
	printf("Observations are as follows\n");
	for(i=-0;i<=(n-1);i++)
	{
		printf("%0.2f\t",x[i]);
	}
	printf("\nRange = %0.2f\n",Range);
}
