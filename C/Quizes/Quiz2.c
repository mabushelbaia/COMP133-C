#include <stdio.h>
#include <stdlib.h>
int is_complete(int);
int main()
{
    int a,b;
    printf("Enter A & B :\n");
    scanf("%d %d",&a,&b);
    for(a;a<=b;a++){
        if(is_complete(a))
            printf("%d\t",a);
    }
    return 0;
}
int is_complete(int a)
{
        int digits =0;
        int even = 0;
        int odd =0;
        while (a !=0)
        {
            digits = a%10;
            if (digits%2==0) //even
                even += digits;
            else if (digits%2 !=0) // you added a semi colon here by mistake 
                odd += digits;
            a=a/10;
        }
        if (even>=odd){
            return 1;
        }

        else{
            return 0;
        }

}