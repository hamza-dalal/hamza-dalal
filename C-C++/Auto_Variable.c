#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	auto int m=1000;
	system("cls");
	fun2();
	printf("%d\n",m);
}
fun1()
{
	int m=10;
	printf("%d\n",m);
}
fun2()
{
	int m=100;
	fun1();
	printf("%d\n",m);
}
