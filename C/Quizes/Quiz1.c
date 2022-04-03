#include <stdio.h>
#include <math.h>
#define PI 3.14
int find_cost(int,int);
int find_area(int,int);
int main(){
    int r,h,cost;
    printf("Please Enter Radius And Height : \n");
    scanf("%d %d",&r,&h);
    printf("Please Enter The cost per cm2 : \n");
    scanf("%d",&cost);
    printf("Cost of 1 cylinder candy in dollars is %d",find_cost(find_area(r,h),cost));
    return 0;
}
int find_area(int r, int h){
    int CalculatedArea = (2*PI*r*h + PI*pow(r,2));
    return CalculatedArea;
}
int find_cost(int area,int cost){
    int cylinderCost= cost * area;
    return cylinderCost;
}