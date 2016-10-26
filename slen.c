#include<stdio.h>
#include<string.h>
#include<stdlib.h>

unsigned int slen(char *str)
{
  unsigned int count = 0;
  printf("str: %s \n",str);
  while(*str != '\0') {
    str++;
    count++;
  }
  
  return count; 
  
}


void main()
{
  unsigned int len = 0;
  char *str = (char*)malloc(20);
  char *tmpstr = (char*)malloc(20);
  printf("Enter the string\n");
  scanf("%s",str);
  len = slen(str);
  printf("%d\n", len);
}


