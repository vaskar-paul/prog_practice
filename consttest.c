#include <stdio.h>

void main()
{
  const int a = 10;
  int *ptr;
  ptr  = &a;
  *ptr = 11; //This works
  //a = 11; --> This will give compilation error since a is RO variable.
  printf ("*ptr : %d\n",*ptr);
  printf ("a : %d\n",a);
}
