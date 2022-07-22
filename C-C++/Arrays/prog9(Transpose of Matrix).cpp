#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int y,z;
	int a[100][100]={},i,j;
	system("cls");
	printf("Enter number of rows of Matrix\n");
	scanf("%d",&y);
	printf("Enter number of coloumns of Matrix\n");
	scanf("%d",&z);
	printf("Now enter elements of Matrix\n");
	for(i=0;i<=(y-1);i++)
	{
		for(j=0;j<=(z-1);j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	system("cls");
	printf("Matrix is as follows:\n");
	{
		for(j=0;j<z;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix is given as follows:\n");
	for(i=0;i<z;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
