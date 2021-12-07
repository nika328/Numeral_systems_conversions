#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int convert_decimal(int number, int base)
{
  int remainders[100]={[0]=0};
  int i=0;
  int res=0;
  while(number>0)
  {
    remainders[i]=number%base;
    i++;
    number/=base;
  }
  for (int j=i; j>=0; j--)
  {
    res+=remainders[j]*pow(10, j);
  }
  return res;
}


int main(void) {
 int num;
 printf("Enter a decimal number: ");
  while (scanf("%d",&num)==0)
    {
        printf("Invalid input. Please enter a number: ");
        scanf("%*s");
    }
    int base;
    printf("Enter a natural number from the interval <2,9>: ");
    while((scanf("%d",&base)==0))
    {
      printf("Invalid input. Please enter a number: ");
        scanf("%*s");
    }
    while(base>9||base<2)
    {

      printf("Invalid input. Please enter a number from the interval: ");
      scanf("%d", &base);
    }
    printf("\nThe number %d in the base %d is %d", num, base, convert_decimal(num, base));
 return 0;
}
