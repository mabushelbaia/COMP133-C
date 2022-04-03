
#include <stdio.h>
void main(){
    float x,y,z;
    while(10){
        scanf("%f %f",&y,&x);
        z = y - 0.427*x -0.401;
        printf("%f\t%f\n",z,z*z);
    }
}