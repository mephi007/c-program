#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter character from keyboard:\n");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("%c is uppercase of ascii %d", ch, ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("%c is lowercase of %d",ch,ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("%c is a digitof %d", ch, ch);
	}
	else printf("%c is a special character of ascii",ch, ch);
	getch();
  return 0;
}
