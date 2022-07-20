#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int n,i;
	float x[75],max=-9999,min=9999;
	printf("Enter number of observations\n");
	scanf("%d",&n);
	printf("Enter your observations below\n");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%f",&x[i]);
		if(max<=x[i])
		{
			max=x[i];
		}
		if(min>=x[i])
		{
			min = x[i];
		}
	}
	system("cls");
	printf("Observations are as follows:\n");
	for(i=0;i<=(n-1);i++)
	{
		printf("%0.2f\t",x[i]);
	}
	printf("\nMaximum observation = %0.2f\n",max);
	printf("Minimum observation = %0.2f\n",min);
	printf("Range = %0.2f",max-min);

}
