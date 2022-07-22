#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
	system("cls");
	char a[20],x;
	printf("Enter any string\n");
	gets(a);
	printf("a = %s\n",a);
	printf("Enter a string to search in 'a'\n");
	x=getchar();
	if(strchr(a,x))
	{
		printf("Substring starting from character %c = %s\n",x,strchr(a,x));
	}
	else
	{
		printf("%c character does not exist in %s\n",x,a);
	}
}

