#include <stdio.h>
int
main ()
{
  char p[100];
  int a,i;
  printf ("enter:");
  scanf ("%s",&p);
  printf ("number:");
  scanf ("%d",&a);
  for(i=0;i<=a;i++)
  {
  printf ("%s\n", p);
  }
  
  return 0;
}
