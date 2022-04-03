#include <stdio.h>
int main()
{
    int secondInteger, firstInteger;
    do
    {
        printf("Enter The Pair :");
        scanf("%d %d",&firstInteger,&secondInteger);
    }while (secondInteger % firstInteger != 0);
    return 0;
}