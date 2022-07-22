#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	int f[5]={0},i,n,x[100];
	printf("Enter number of Observations\n");
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		printf("Enter any Observations\n");
		scanf("%d",&x[i]);
		if(x[i]<10)
		{
			f[0]=f[0]+1;
		}
		else if(x[i]<20)
		{
			f[1]=f[1]+1;
		}
		else if(x[i]<30)
		{
			f[2]=f[2]+1;
		}
		else if(x[i]<40)
		{
			f[3]=f[3]+1;
		}
		else if(x[i]<50)
		{
			f[4]=f[4]+1;
		}
	}
	system("cls");
	printf("Observations are as follows:\n");
	for(i=0;i<=(n-1);i++)
	{
		printf("%d\t",x[i]);
	}
	printf("\nFrequency Table:\n");
	printf("C.I.\tFrequency\n");
	printf("00 - 10\t\t%2d\n",f[0]);
	printf("10 - 20\t\t%2d\n",f[1]);
	printf("20 - 30\t\t%2d\n",f[2]);
	printf("30 - 40\t\t%2d\n",f[3]);
	printf("40 - 50\t\t%2d\n",f[4]);
}
