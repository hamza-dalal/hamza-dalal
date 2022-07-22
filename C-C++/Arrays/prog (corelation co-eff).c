#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int i,n;
	float x[50],y[50],sumx=0,sumy=0,sumxsq=0,sumysq=0,sumxy=0,varx,vary;
	float num,sdx,sdy,r,meanx,meany;
	printf("Enter number of observations\n");
	scanf("%d",&n);
	printf("Enter the values of X and Y below\n");
	for(i=0;i<=(n-1);i++)
	{
		scanf("%f%f",&x[i],&y[i]);
		sumx=sumx+x[i];
		sumy+=y[i];
		sumxsq+=(x[i]*x[i]);
		sumysq+=pow(y[i],2);
		sumxy+=x[i]*y[i];
	}
	meanx=sumx/n;
	meany=sumy/n;
	num=(sumxy/n)-(meanx*meany);
	varx=(sumxsq/2)-pow(meanx,2);
	vary=(sumysq/2)-pow(meany,2);
	sdx=sqrt(varx);
	sdy=sqrt(vary);
	r=num/(sdx*sdy);
	system("cls");
	printf("The observations are as follows:\n");
	for(i=0;i<=(n-1);i++)
	{
		printf("(%0.2f,%0.2f)\n",x[i],y[i]);
	}
	printf("Mean of x = %0.6f\n",meanx);
	printf("Mean of y = %0.6f\n",meany);
	printf("Standard Deviation of x = %0.6f\n",sdx);
	printf("Standard Deviation of y = %0.6f\n",sdy);
	printf("Correlation co-efficient = %0.6f\n",r);
}
