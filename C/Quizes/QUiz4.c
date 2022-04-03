#include <stdio.h>
#include <string.h>
int stringcomparing(char a[],char b[],int size){
    int i;
    for(i=0;i<size;i++){
        if(a[i]>b[i]){
            return 1;
        }
        else if(b[i]>a[i])
            return -1;
    }
    return 0;

}
int main(){
    char a[] = {"Bhmad"};
    char b[] = {"Ahmnd"};
    int size = strlen(a);
    int result = stringcomparing(a,b,size);
    if (result > 0)
        printf("A Is Greater Than B\n");
    if(result<0)
        printf("B Is Greater Than A\n");
    if(result==0)
        printf("A Is Equall to B\n");
}