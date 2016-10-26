#include<stdio.h>

void main()
{
  unsigned int num, digit, rem = 0, temp;
  unsigned int count1 = 0,count2 = 0;
  unsigned int count[10] = {0};
  printf("Enter the number: ");
  scanf("%d", &num);
  //printf("Enter the digit: ");
  //scanf("%d", &digit);
  temp = num;

  while(num != 0) {
    rem = num % 10;
    //if ( rem == digit ) {
    //	count++;
    //}
    /*switch(rem) {
      case 1:
        count1++;
        break;

      case 2:
	count2++;
	break;

      default:
	break;

    }*/
    count[rem]++;
    num = num/10;
  }

  for(digit = 0; digit < 10; digit++) {
    printf("%d frequency is: %d\n", digit, count[digit]);
  }
  
  //printf("frequency of 1: %d\n", count1);
  //printf("frequency of 2: %d\n", count2);
  //printf("%d occurs %d times in %d\n", digit, count, temp);
}
