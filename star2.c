#include<stdio.h>

#define MAXROW 5

void main()
{

  //int arr[][MAXROW];
  char ch = '*';
  unsigned int i, j, k, count = 0;

  //for ( k = 6; k > 0; k++ ) {
  //  printf(" ");
    for ( i = 0; i < 6; i++ ) {
      for( k = 6; k > count; k-- ) { 
        printf(" ");
      }
      for ( j = 0; j < i; j++ ) {
	printf("%c ",ch);
      }
      printf("\n");
      count = count + 1;
    }
 // }

/*
  for (i = 0, k = 0; i < (10/2 - k); i++, k+2) {
    printf(" ");
  
    for(j = 0; j < 5; j++) {
      count = j;
      do {
        printf("%c ", ch);
      } while (count--);
      break;
    }
    printf("\n");
    
  } */
}

//VP TODO 
