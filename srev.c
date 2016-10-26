#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void srev(char *str)
{
  char *temp = (char*)malloc(20);
  strcpy(temp, str);
  printf("str: %s, temp: %s\n",str,temp);
  while(*temp != '\0') {
    temp++;
  }
 
  while(strlen(str)) {
    *str++ = *--temp; 
  }
  
}


void main()
{
  unsigned int begin, mid, end, flag = 0;
  char *str = (char*)malloc(20);
  char *tmpstr = (char*)malloc(20);
  printf("Enter the string\n");
  scanf("%s",str);
  end = (strlen(str)) - 1;
  mid = end/2;
  strcpy(tmpstr,str);
  srev(str);

  printf("%s\n", str);


}


