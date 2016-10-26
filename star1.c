#include<stdio.h>

#define MAXROW 5

void main()
{

  //int arr[][MAXROW];
  int i, j;
  for (i = 0; i < MAXROW; i++) {
    for(j = 0; j <= i; j++) {
      printf("%c", '*');
    }
    printf("\n");
  }

}
