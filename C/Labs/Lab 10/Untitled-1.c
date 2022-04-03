#include <stdio.h>
typedef struct{
    char name[100];
    int sn;
    int marks;
    int percentage;
    int grades;
}students;

int main(){
    students arr[50];
    for (int i=0;i<1;i++){
        scanf("%s %d %d %d %d",arr[i].name,&arr[i].sn,&arr[i].marks,&arr[i].percentage,&arr[i].grades);
    }
    printf("%s %d %d %d %d",arr[i].name,arr[i].sn,arr[i].marks,arr[i].percentage,arr[i].grades);
    return 0;
}