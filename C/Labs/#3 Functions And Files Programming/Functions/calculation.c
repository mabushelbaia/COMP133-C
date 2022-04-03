#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c;
    double result;
    printf("Please Enter A,B and C\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    result = sqrt(pow(b,2)-4*a*c);
    printf("The Result is %0.2lf",result);
}