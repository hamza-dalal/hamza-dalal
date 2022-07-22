#include<math.h>
#include<conio.h>
#include<stdio.h>
main()
{
	char a;int x; float p,q;
	a='A';
	x=125;
	p=10.25;
	q=18.76;
	printf("%c is stored at address %u\n",a,&a);
	printf("%d is stored at address %u\n",x,&x);
	printf("%0.4f is stored at address %u\n",p,&p);
	printf("%0.4f is stored at address %u\n",q,&q);
}
