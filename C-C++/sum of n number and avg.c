#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i=1,n,sum=0;
	float avg;
	printf("Enter number of observations\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i+=1;
	}
	avg=sum/(float)n;
	printf("Total=%d\n",sum);
	printf("Average=%0.2f\n",avg);
}
