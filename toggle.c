#include <stdio.h>

void main()
{

  unsigned int bitpos = 3, number = 8, i = 0;
  while( i < 100) {
    number ^= 1 << bitpos;

    printf("%d\n",number);
    i++;
  }
}

  
