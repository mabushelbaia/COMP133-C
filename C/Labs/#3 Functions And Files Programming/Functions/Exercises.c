#include <stdio.h>
#include <math.h>
int main(){
    //(Q1) printf("The new line is inserted like this\n"); // Gets down a new like
    // printf("The tab is inserted like this\t");      // Like You Pressed Tab "4 Spaces"
    // printf("The backspace is \binserted like this"); // Deletes The charachterr befor it
    // printf("The carriage return is \rinserted like this"); // delete all the worlds after it
    // printf("\"The double quotations is  inserted like this \""); //Double Quotaions
    // printf("\\The Backslash quotations is  inserted like this ");
    // float a,b;
    // float x,y,z;
    // float Z;
    // float X;
    // printf("Enter x,y,z\n");
    // scanf("%f %f %f",&x,&y,&z);
    
    // X = a*a + 2*a*b + b*b;
    // Z = ((4.2*(x+y)/z)-(0.25*x/(y+z)))/pow(x+y, 2);
    // printf("Z Equalls %f",Z);
    int x;
    printf("Please Enter a 3 digits number\n");
    scanf("%d",&x);
    int hundreds, tens , single, count=0,rev=0;
    // hundreds = x / 100; 
    // tens = (x/10)%10; 
    // single = x%10;
    // count = hundreds + tens + single;
    // reverse = single*100 + tens*10 + hundreds;
    while (x!=0){
        int num = x%10;
        rev = rev*10 + num;
        count += num;
        x /= 10;

    }
    printf("count is %d\n",count);
    printf("reverse is %d",rev);

    return 0;

}