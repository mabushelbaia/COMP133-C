#include <stdio.h>
#define  PI 3.14
int main(){
    float radius;
    float area;
    FILE *input;
    FILE *output;
    input = fopen("input.text", "r");
    output = fopen("Output.txt", "w");
    fscanf(input,"%f",&radius);
    area = PI * radius * radius;
    fprintf(output,"The Area Of The Circle Is %0.2f",area);
    return 0;
}