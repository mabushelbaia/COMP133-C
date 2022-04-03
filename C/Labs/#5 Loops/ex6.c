#include <stdio.h>

int main()
{
    int i,j=2,prime=1;
    int count = 1;
    while(count<=50){
        prime = 1;
        for(i=2;i<j;i++)
            if(j%i==0){
                prime = 0;
                break;
            }
        if (prime==1){
            printf("%d\t",j);
            count++;
        }
        j++;
    }


        
    return 0;
}
