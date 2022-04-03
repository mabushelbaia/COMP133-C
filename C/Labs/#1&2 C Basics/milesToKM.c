#include <stdio.h>
#define CHANGING_FACTOR 1.60934
int main()
{
    float M;
    float Km;
    printf("Enter The number of Miles : \n");
    scanf("%f", &M);
    Km =  CHANGING_FACTOR * M;
    printf("Number Of Kilometers :\n%f", Km);
    return 0;
}