#include<stdio.h>

int LinearSearch(int ele, int n, int a[])
{
  int i;
  for( i = 0; i < 10; i++) {
  	if ( ele == a[i] ) {
	  return i + 1;
	}	
        if ( ele < a[i] ) {
	  return -1;
	}	
  }
  return -1;

}

int main()
{
  int i = 0, ele, index = -1, n;
  int a[20];
  printf("Enter number of elements: \n");
  scanf("%d",&n);
  printf("Enter the elements in ascending order:\n");
  for( i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  printf("Enter the element to search: ");
  scanf("%d", &ele);
  index = LinearSearch(ele, n, a);
  if (index != -1) {
    printf("Element %d found at index %d\n", ele, index);
  }
  else {
    printf("Element not found\n");
  }

  return 0;
}
