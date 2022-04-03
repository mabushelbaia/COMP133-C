#include <stdio.h>
#include <string.h>
#define MAX 20
#define NUM 5
void alpha(char a[][MAX]);
void main(){
    char countries[NUM][MAX];
    for(int i=0;i<NUM;i++)
        scanf("%s",countries[i]);
    alpha(countries);
    for(int i=0;i<NUM;i++)
        printf("%s\t",countries[i]);
}
void alpha(char a[][MAX]){
    for(int i=0;i<NUM;i++){
        for(int j=0; j< NUM-1;j++){
            int flag = strcmp(a[i],a[j+1]);
            if (flag > 0){
                char temp[MAX];
                strcpy(temp,a[i]);
                strcpy(a[i],a[j+1]);
                strcpy(a[j+1],temp);
            }

        }
    }

}