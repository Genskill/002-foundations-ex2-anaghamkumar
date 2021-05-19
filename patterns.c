#include <stdio.h>
int main() {
   int i, j, rows, s, c=1, n;
   while(c>0)
   {
    printf("Enter type of pattern(1 or 2): ");
    scanf("%d",&c);
   switch(c)
   {
    case 1:
     printf("Enter the number of rows: ");
     scanf("%d", &rows);
     for (i = rows; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
           printf("# ");
        }
        printf("\n");
       }
     break;
     case 2:
      printf("Enter number of rows: ");
      scanf("%d",&rows);
      for(i=1;i<=rows;i++) { 
        for(s=1;s<=rows-i;s++) printf(" "); 
        for(j=1;j<=i;j++) printf("#");
        printf("\n");
      }
      break;
    }
   }     
}