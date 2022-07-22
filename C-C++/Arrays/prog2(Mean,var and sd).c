
#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int i,n;
	float mean,var,sd,x[75],sumx=0,sumxsq=0;
	printf("Enter number of observations\n");
	scanf("%d",&n);
	printf("Enter your observations\n");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%f",&x[i]);
		sumx=sumx+x[i];
		sumxsq=sumxsq+(x[i]*x[i]);
	}
	mean=sumx/n;
	var=(sumxsq/n)-(pow(mean,2));
	sd=sqrt(var);
	system("cls");
	printf("Observations are as follows:\n");
	for(i=0;i<=(n-1);i++)
	{
		printf("%0.2f\t",x[i]);
	}
	printf("\nMean = %0.6f\n",mean);
	printf("Variance = %0.6f\n",var);
	printf("Stansard Deviation = %0.6f\n",sd);
}
