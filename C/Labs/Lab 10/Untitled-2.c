#include <stdio.h>
typedef struct{
    double x,y;

}complex;
int main(){
    complex num;
    scanf("%lf %lf",&num.x,&num.y);
    printf("%3.0lf + i%3.0lf",num.x,num.y);
}