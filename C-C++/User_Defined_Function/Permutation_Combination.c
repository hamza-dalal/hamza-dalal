#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,r,ncr,npr,num;
	int deno1,deno2;
	system("cls");
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the value of r\n");
	scanf("%d",&r);
	pqr();
	num=fact(n);
	deno1=fact(n-r);
	deno2=fact(r);
	ncr=num/(deno1*deno2);
	npr=fact(n)/fact(n-r);
	printf("Combination = %d\n",ncr);
	printf("Permutation = %d\n",npr);
	xyz();
}

fact(int x)
{
	int p=1,q;
	for(q=1;q<=x;q++)
	{
		p=p*q;
	}
	return(p);
}

pqr()
{
	int r;
	for(r=1;r<=50;r++)
	{
		printf("%c ",'*');
	}
	printf("\n");
}

xyz()
{

	int p;
	for(p=1;p<=50;p++)
	{
		printf("%c ",'*');
	}
}
