#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int x;
main()
{
	x=10;
	printf("X = %d\n",x);
	printf("X = %d\n",fun1());
	printf("X = %d\n",fun2());
	printf("X = %d",fun3());
}
fun1()
{
	x=x+10;
	return(x);
}
fun2()
{
	int x;
	x=1;
	return(x);
}
fun3()
{
	x=x+10;
	return(x);
}
