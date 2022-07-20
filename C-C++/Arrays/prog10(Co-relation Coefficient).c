#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int n,i;
	float x[75],y[75],sumx=0,sumy=0,sumx2=0,sumy2=0,sumxy=0,avgx,avgy,varx,vary,cov,r;
	printf("Enter number of Observation\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter any Observation\n");
		scanf("%f%f",&x[i],&y[i]);
		sumx=sumx+x[i];
		sumy=sumy+y[i];
		sumx2=sumx2+(x[i]*x[i]);
		sumy2=sumy2+(y[i]*y[i]);
		sumxy=sumxy+(x[i]*y[i]);
	}
	avgx=sumx/n;
	avgy=sumy/n;
	cov=(sumxy/n)-(avgx*avgy);
	varx=(sumx2/n)-pow(avgx,2);
	vary=(sumy2/n)-pow(avgy,2);
	r=cov/(sqrt(varx)*sqrt(vary));
	printf("Observationms of X are as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%f\t",x[i]);
	}
	printf("\nObservationms of Y are as follows:\n");
	for(i=0;i<n;i++)
	{
		printf("%f\t",y[i]);
	}
	printf("Mean of X = %f\n",avgx);
	printf("Mean of Y = %f\n",avgy);
	printf("Variance of X = %f\n",varx);
	printf("Variance of Y = %f\n",vary);
	printf("Standard Deviation of X = %f\n",sqrt(varx));
	printf("Standard Deviation of Y = %f\n",sqrt(vary));
	printf("Covariance of X & Y = %f\n",cov);
	printf("Correlation Co-efficient = %f\n",r);
}
