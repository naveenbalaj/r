#include <stdio.h>
int main ()
{

  char a[100],b[100];
  printf ("1st string:");
  scanf ("%s",&a);
  printf ("2ns string:");
  scanf ("%d",&b);
 if(a[100]==b[100])
  printf("true");
  else
  printf("false");
  
  return 0;
}
