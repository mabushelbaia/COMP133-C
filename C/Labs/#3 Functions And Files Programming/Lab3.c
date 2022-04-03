#include <stdio.h>
#include <math.h>
#define PI 3.14
void sum(); //Exercise1 Prototype "USE DOCTOR PROTOTYPES which is int sum(int,int);"
void distance(); //Exercise2 Prototype
int cylinderSurfaceArea();
int cylinderVolume(); 
double insh_cm(double);
double roundup(double);
double area (double);
int main(){
    double InchesLenght;
    printf("Please Enter Length In Inches\n");
    scanf("%lf", &InchesLenght);
    printf("Area in Inches %lf\n",area(InchesLenght));
    printf("Area in Cm %lf\n",insh_cm(area(InchesLenght)));
    printf("%lf",roundup(27.287));
    return 0;
}
void sum(){
    int a,b;
    printf("enter 2 numbers\n");
    scanf("%d %d", &a,&b);
    int sum = a + b;
    printf("%d", sum);
}
void distance(){
    int a,b,c,d,z;
    FILE *input;
    FILE *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt","w");
    fscanf(input,"%d %d %d %d",&a,&b,&c,&d);
    z = sqrt((pow((c-a),2))+(pow((d-b),2)));
    fprintf(output,"%d",z);
}
int cylinderSurfaceArea(){
    int r;
    printf("Enter cylinder radius\n");
    scanf("%d",&r);
    int area = 2 * PI * r;
    return area;
}
int cylinderVolume(){
    int H,r;
    printf("Enter cylinder radius and hieght\n");
    scanf("%d%d",&r,&H);
    int volume = pow(r,2) * H * r;
    return volume;
}
double roundup(double n){
    int x = n*100.0 +0.5;
    return x/100.0;

}

double area(double LengthInch){
    double Inchesarea = pow(LengthInch,2);
    return Inchesarea;
}
double insh_cm(double area1){
    double cm = area1 * 2.54;
    return cm;

}