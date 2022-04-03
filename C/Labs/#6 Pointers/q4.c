#include <stdio.h>
void moneyChange(int,int,int*,int*,int*,int*,int*,int*,int*,int*);
int main()
{
    int twoHunderd,oneHundred,fifty,tweny,tens,fives,twos,ones;
    int amountPaid,amountDue;
    printf("Enter The Amount Paid :\n");
    scanf("%d",&amountPaid);
    printf("Enter The Amount Due :\n");
    scanf("%d",&amountDue);
    moneyChange(amountPaid,amountDue,&twoHunderd,&oneHundred,&fifty,&tweny,&tens,&fives,&twos,&ones);
    printf("200 : %d\n",twoHunderd);
    printf("100 : %d\n",oneHundred);
    printf("50 : %d\n",fifty);
    printf("20 : %d\n",tweny);
    printf("10 : %d\n",tens);
    printf("5 : %d\n",fives);
    printf("2 : %d\n",twos);
    printf("1 : %d\n",ones);
    

}
void moneyChange(int amountPaid,int amountDue,int* twoHunderd,int* oneHundred,int* fifty,int* tweny,int* tens,int* fives,int* twos,int* ones)
{
    int change = amountPaid - amountDue;
    *twoHunderd= change/200;
    change = change%200;
    *oneHundred= change/100;
    change = change%100;
    *fifty= change/50;
    change = change%50;
    *tweny = change/20;
    change %=20;
    *tens= change/10;
    change = change%10;
    *fives= change/5;
    change = change%5;
    *twos= change/2;
    change = change%2;
    *ones = change/1;


}