#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int i,n;
	float x[75],min = 9999.0;
	printf("Enter number of Observations\n");
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		printf("Enter any Observations\n");
		scanf("%f",&x[i]);
		if(min >= x[i])
		{
			min=x[i];
		}
	}
	system("cls");
	printf("Observations are as follows:\n");
	for(i=0;i<=(n-1);i++)
	{
		printf("%0.2f\t",x[i]);
	}
	printf("\nMinimum Observation = %0.2f\n",min);
}
