#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	float m;
	int x[50],i,j,n,t;
	printf("Enter the number of Observations\n");
	scanf("%d",&n);
	printf("Enter your Observations:\n");
	for(i=1;i<=n;i++)
	{
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
	printf("\nSorted Observations in Descending Order are as follows:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",x[i]);
	}
	if(n%2==0)
	{
		m=(x[n/2]+x[(n/2)+1])/2.0;
	}
	else
	{
		m=x[(n+1)/2];
	}
	system("cls");
	printf("\nMedian = %0.2f\n",m);
}

