#include<math.h>
#include<conio.h>
#include<stdio.h>
main()
{
	int i;
	for(i=1;i<=3;i++)
	fun();
}
fun()
{
	static int x=0;
	x=x+1;
	printf("X=%d\n",x);
}
