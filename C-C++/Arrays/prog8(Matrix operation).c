#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int a[3][2],b[3][2],c[3][2],i,j;
	printf("Enter elements of Matrix A\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of Matrix B\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=2*a[i][j]-4*b[i][j];
		}
	}
	system("cls");
	printf("Matrix A:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Matrix B:\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Matrix C\t{C=2A-4B}\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
