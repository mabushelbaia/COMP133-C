#include <stdio.h>
#define  PI 3.14
int main(){
    float radius;
    float area;
    FILE *input;
    FILE *output;
    input = fopen("input.txt", "r");
    output = fopen("Output.txt", "w");
    fscanf(input,"%f",&radius);
    area = PI * radius * radius;
    fprintf(output,"The Area Of The Circle Is %0.2f",area);
    fclose(input);
    fclose(output);
    return 0;
}
