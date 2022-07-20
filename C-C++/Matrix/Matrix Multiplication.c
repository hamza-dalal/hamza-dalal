#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	int m1,m2,n1,n2,i,j,k,sum=0,a[50][50],b[50][50],c[50][50];
	system("cls");
	printf("Enter number of Rows & Columns of Matrix A\n");
	scanf("%d%d",&m1,&m2);
	printf("Enter number of Rows & Columns of Matrix B\n");
	scanf("%d%d",&n1,&n2);
	system("cls");
	if(m2==n1)
	{
		printf("Enter the elements of Matrix A\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<m2;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter the elements of Matrix B\n");
		for(i=0;i<n1;i++)
		{
			for(j=0;j<n2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("Matrix A is as follows:\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<m2;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("Matrix B is as follows:\n");
		for(i=0;i<n1;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				for(k=0;k<n1;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
		printf("\nA*B is given by:\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrix is not multiplicable\n");
	}
}

