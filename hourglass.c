#include<stdio.h>

int main()
{
  int i, j, k;
  int sum[16] = {0};
  int a[6][6] = { 1, 1, 1, 0, 0, 0,
		  0, 1, 0, 0, 0, 0,
       		  1, 1, 1, 0, 0, 0,
		  0, 0, 0, 0, 0, 0,
		  0, 0, 0, 0, 0, 0,
		  0, 0, 0, 0, 0, 0 };
  
  for(i = 0; i < 6; i++) {
    for(j = 0; j < 6; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
 
  for(i = 0; i <= 3; i++) {
    for(j = 0; j <= 3; j++) {
      sum[k] = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
      printf("%d\n",sum[k]);
      k++;
    }
  } 
/*
  for(k = 0; k < 16; k++) {
    if(sum[k] > sum[k++]) 
      max = sum[k];
    else
      max = 
  }  
*/
  return 0; 
}
