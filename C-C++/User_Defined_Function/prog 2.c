#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	float a,b,xyz(float x);
	system("cls");
	printf("Enter any number\n");
	scanf("%f",&a);
	b=xyz(a);
	printf("%f\t%f\n",a,b);
}
float xyz(float x)
{
	float y;
	y=x*x;
	return(y);
}
