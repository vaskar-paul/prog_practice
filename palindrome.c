#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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

  for (begin = 0; begin < mid; begin++,end--) {
    if(tmpstr[begin] != str[end]) {
      printf("Not palindrome\n");
      exit(0);
    }
  }
  
  printf("Palidrome\n");
  
}


