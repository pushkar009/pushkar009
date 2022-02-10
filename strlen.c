#include<studio.h>
#include<conio.h>

void main()
{
  char a[100];
  int i, count;
  printf("Enter string: ");
  gets(a);
  i=0;
  count=0;
  while (a[i]!='\0')
    {
     i++;
     count++;
    }
  printf("%d", count);
  getch();
}
