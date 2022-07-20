#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int x[50],i,j,n,t;
	printf("Enter number of Observations\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter your Observation\n");
		scanf("%d",&x[i]);
	}
	system("cls");
	printf("Observations are as follows:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",x[i]);
	}
	for(i=1;i<=(n-1);i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			if(x[j]<=x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
	printf("\nSorted Observations in Descending order are as follows:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",x[i]);
	}
}

