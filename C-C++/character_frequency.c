#include <stdio.h>
#include <conio.h>
main()
{
char str[1000], ch;
int i, freq = 0;
printf("Enter a string: ");
gets(str);
printf("Enter a character to find the frequency: ");
scanf("%c",&ch);
for(i = 0; str[i] != '\0'; i++)
{
if(ch == str[i])
freq++;
}
printf("Frequency of %c = %d", ch, freq);
}
