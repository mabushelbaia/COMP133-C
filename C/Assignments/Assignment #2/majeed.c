#include <stdio.h>
#include <math.h>


double charges(double hours, double * cost, double * avcost){


         if(hours <= 10){
           *cost = 7.99;
         } else {
           *cost = 7.99 + (hours - 10) * 1.99;
         }

             *avcost = *cost/hours;
}


  double round_money(double * charges, double * avecost){

     *avecost = (int)(*avecost * 100 + .5);
     *avecost = (double)*avecost / 100;

   *charges = (int)(*charges * 100 + .5);
   *charges = (double)*charges / 100;

  }


int main(){

double hours, av, c;
int datem, datey, custnum;

FILE * fpointer = fopen("usage.txt", "r");
       fscanf(fpointer, "%d %d", &datem, &datey);
FILE * fpointer1 = fopen("charges.txt", "w");
       fprintf(fpointer1, "Charges for %d / %d\n\n", datem, datey);
do{
  fscanf(fpointer, "%d %lf", &custnum, &hours);

    charges(hours, &c, &av);
    round_money(&c, &av);

  FILE * fpointer1 = fopen("charges.txt", "a");

    fprintf(fpointer1, "Customer Number: %d\nNumber Of Consumption hours: %f\nTotal Cost: %f\nAverage Cost Per Hour: %f\n\n", custnum, hours, c, av);
                  } while(!feof(fpointer));

fclose(fpointer);
fclose(fpointer1);



return 0;
}