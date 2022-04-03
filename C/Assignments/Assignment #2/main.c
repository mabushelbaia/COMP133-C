#include <stdio.h>
void total_average(float hours,float* average, float* total); // function prototypes.
float round_money(float a);

int main(){
    float average,total,hours;
    int month,year,ID;
    FILE *usage; //declaring pointers
    FILE *charges;
    usage = fopen("usage.txt", "r"); // assigning pointer to the input file.
    charges = fopen("charges.txt", "w"); // assigning pointer to the output file.

    fscanf(usage,"%d %d",&month,&year); //scans the month and year.
    fprintf(charges,"Charges For %d/%d\n",month,year); //prints the month and year.
    fprintf(charges,"ID\t     Hours\t     Total\t     Average\n"); // headings.
    while(1){ // whilte(TRUE)
        int status;
        status = fscanf(usage,"%d %f",&ID,&hours); //scans id and hours.
        if (status == EOF) // breaks at the end of the file
            break;
        total_average(hours,&average,&total); // calculate avarage and total cost.
        fprintf(charges,"%d\t %f\t %f\t %f\n",ID,hours,round_money(total),round_money(average)); //prints the average and cost rounded to the nearst 0.01.
    }


    return 0;
}
void total_average(float hours,float* average, float* total){ //first function : To calculate the total cost and average per hour.
    if (hours <= 10)                           // case 1 : if hours are less or equall than 10 (Flat fee = 7.99).
        *total = 7.99;
    else if(hours > 10)                       // case 2 : if hours are more than 10 we fee (7.99) for the first 10 hours then (1.99) for addtional hours.
        *total = 7.99 + (hours - 10) * 1.99;
    *average = *total/hours;                 

}
float round_money(float var){ // Second function : rounding function to 2 decimal points (same as %0.2f).
    float value = (int)(var * 100 + .5); 
    return (float)value / 100;
}