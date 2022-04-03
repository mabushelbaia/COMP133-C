#include <stdio.h>
#define PI 3.14  //constant Macro
int main() {    /* HEY */
   float r; //you can use float r,a; instated
   float a;
   printf("Please enter the Radius : \n");
   scanf("%f",&r);
   a = PI * r * r;
   printf("Area Of The Circle is %f", a);
   return 0;
}