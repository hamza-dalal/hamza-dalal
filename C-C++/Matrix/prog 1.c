#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int a[3][2],i,j;
	printf("Enter elements of Matrix\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	system("cls");
	printf("Original Matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix is\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
