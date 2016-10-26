#include<stdio.h>

int LinearSearch(int ele, int a[])
{
  int i;
  for( i = 0; i < 10; i++) {
  	if ( ele == a[i] ) {
  	  printf("%d found at index: %d\n", ele, i);
	  return 0;
	}		
  }
  printf("%d not found\n", ele);
  return -1;

}

int main()
{
  int i = 0, ele, result = 0;
  int a[10] = {1,2,3,4,5,6,7,8,9,-1};
//  printf("Enter the elements:\n");
//  for( i = 0; i < 10; i++) {
//    scanf("%d", &a[i]);
//  }
  printf("Enter the element to search: ");
  scanf("%d", &ele);
  result = LinearSearch(ele, &a[0]);
  return 0;
}
