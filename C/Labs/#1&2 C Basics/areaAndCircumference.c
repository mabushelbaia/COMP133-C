#include <stdio.h>
#define PI 3.14  //constant Macro
int main() {    /* HEY */
   float r; //you can use float r,a; instated
   float a;
   float c;
   printf("Please enter the Radius : \n");
   scanf("%f",&r);
   a = PI * r * r;
   c = 2 * r * PI;
   printf("Area Of The Circle is %f\n", a);
   printf("Circumference  Of The Circle is %f", c);
   return 0;
}