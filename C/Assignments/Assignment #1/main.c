#include <stdio.h>
#include <stdlib.h>
void magic_numbers(int,int,int);
int main()
{
    int leftbound,rightbound,m;
    printf("Enter The Bounds :\n");
    scanf("%d %d",&leftbound,&rightbound);
    printf("Enter Digit to exclude\n");
    scanf("%d",&m);
    magic_numbers(leftbound,rightbound,m);
    return 0;
}
void magic_numbers(int leftbound,int rightbound,int m)
{
    int temp;
    if(leftbound>rightbound){ //swaps the left bound with the right one if the left one is bigger
            temp=rightbound;
            rightbound=leftbound;
            leftbound=temp;

        }
    for(leftbound;leftbound<=rightbound;leftbound++)
    {
        int leftdigit = 0,digits=0;
        int n = leftbound;
        int flag=0;

        for(n=leftbound;n/10>0;n/=10)
        {
            leftdigit=(n/10)%10; //finds the digit right befor the sum
            digits+=n%10; //finds the sum of digits
            if (n%10==m){ //exclude the number if it includes the excluded digit
                flag =0;
                break;
            }
            if(leftdigit>digits){ //compares if the far left digit is bigger than the sum of the rest
                flag = 1;
            }
            else{ 
                flag=0;
                break;
            }
        }
        if (flag==1){ //if all the conditions apply prints the integer
            printf(" %d\t",leftbound);
        }
    }
}