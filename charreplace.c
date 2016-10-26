#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
  char *str = (char *)malloc(15);
  //str = "Hello World"; //Segmentation fault
  strcpy(str, "Hello World");
  str[1] = 'K';
  
  
  printf("%s\n", str);
}
