#include <stdio.h>
int main(){
    int x,y,z;
    char operation;
    printf("Enter Valuse of x and y\n");
    scanf("%d %d",&x,&y);
    printf("Enter the operation\n");
    scanf(" %c", &operation);
    switch(operation){
        case '+':
            z = x+y;
            break;
        case '-':
            z = x-y;
            break;
        case '/':
            z = x/y;
            break;
        case '%':
            z = x%y;
            break;
        case '*':
            z = x*y;
            break;
        default:
            printf("invalid");
            break;
        
}
    printf("%d",z);
    return 0;
}