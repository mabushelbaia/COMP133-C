#include <stdio.h>
int main() {
   int i, j, rows=10, k = 0;

   for(i=0;i<rows;i++,k=0){
      for(j=0;j<rows-i;j++)
         printf(" ");
      while(k != (2*(i+1)-1)){
         printf("%d",i);
         k++;
      }
      printf("\n");
   }
   return 0;
}