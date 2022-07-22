#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int x[100],i,j,n;
	int l[]={0,10,20,30,40};
	int u[]={10,20,30,40,50};
	int f[5]={0};
	printf("Enter number of observations\n");
	scanf("%d",&n);
	printf("Enter your observations\n");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&x[i]);
		for(j=0;j<=4;j++)
		{
			if(x[i]>=l[j]&&x[i]<u[j])
			{
				f[j]=f[j]+1;
			}
		}
	}
	system("cls");
	printf("Observations are as follows\n");
	for(i=0;i<=(n-1);i++)
	{
		printf("%d\t",x[i]);
	}
	printf("\nFrequency Table:\n");
	printf("\tC.I.\t\tFrequency\n");
	for(i=0;i<=4;i++)
	{
		printf("\t%d-%d\t\t%d\n",l[i],u[i],f[i]);
	}
}
