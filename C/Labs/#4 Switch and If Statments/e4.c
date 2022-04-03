#include <stdio.h>
#include <math.h>
double area(double,double,double);
int main(){
    printf("Enter The Sides Length Of The Triangle\n");
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);    if (a+c>b && a+b>c && b+c>a){
        printf("The Area is %lf",area(a,b,c));
    }
    else
        printf("Didn't satisfy the conditions");
    return 0;
}
double area(double a,double b, double c){
    double s = (a+b+c)/2;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
        
}