#include <stdio.h>
int main(){
    int Grade;
    printf("Please Enter The Grade\n");
    scanf("%d",&Grade);
    if (Grade>=60)
        printf("Pass\n");
    else 
        printf("Fail\n");
    return 0;
}