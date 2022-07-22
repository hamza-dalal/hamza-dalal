#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	float x[5],sum=0,avg;
	int i;
	for(i=0;i<=4;i++)
	{
		printf("Enter any observation\n");
		scanf("%f",&x[i]);
		sum=sum+x[i];
	}
	avg=sum/5;
	printf("Observation are as follows\n");
	for(i=0;i<=4;i++)
	{
		printf("%f\t",x[i]);
	}
	printf("Mean = %f\n",avg);
}
