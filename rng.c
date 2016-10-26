#include <stdio.h>

int main()
{
  unsigned int data[100] = {0}, i;
  unsigned int arr[10];

  for (i = 0; i < 100 ; i++)
  {
    data[i] = rand();
    printf("data[%d]: %x\n",i,data[i]);
    arr[i] = data[i%10];
    
  }

  for (i = 0; i < 10; i++)
  {
    arr[i] = data[i%10]
  }
  return 0;
}
