// https://cplusplus.com/reference/cstdio/scanf/

#include <stdio.h>

int main ()
{
  char str1 [80];
  char str2 [80];
  int i;

  printf ("Enter your text: ");
  i = scanf ("%[^\n] %[^\n]",str1,str2);

  printf("This input contains %d strings\n",i);

  return 0;
}
