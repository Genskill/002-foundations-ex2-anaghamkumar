#include <stdio.h>
#include <math.h>
int main()
{ 
  int a, b, c;
  printf("Side 1: ");
  scanf("%d",&a);
  printf("Side 2: ");
  scanf("%d",&b);
  printf("Side 3: ");
  scanf("%d",&c);
  if (pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(a,2) + pow(b,2))
    printf("Yes \n These are the sides of a right triangle"); 
  else printf("No \n Not the sides of a right triangle");
  return 0;
}
