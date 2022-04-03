#include <stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter 3 Numbers :\n");
    scanf("%d %d %d",&n1,&n2, &n3);
    if (n1>n2 && n2>n3 || n3>n2 && n1<n2){
        printf("%d",n2);
    }
    else if (n1>n3 && n3>n2 || n2>n3 && n1<n3){
        printf("%d",n3);
    }
    else{
        printf("%d",n1);
    }

    return 0;
}