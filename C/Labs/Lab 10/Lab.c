#include <stdio.h>
#include <string.h>
#define size 3
typedef struct
{

    char name[10];
    int section;
    float grade;
}Student;

int main(){
    Student arr[size];
    for(int i=0;i<size;i++){
        scanf("%s %d %f",arr[i].name,&arr[i].section,&arr[i].grade);
    }
    char letters[]={"Al"};
    for(int i=0;i<size;i++){
        arr[i].grade = arr[i].grade * 1.05;
        if (arr[i].grade>100)
            arr[i].grade =  100;
        if(strncmp(arr[i].name,letters,2)==0){
            arr[i].grade = 100;
            printf("\nFLAG\n");
        }
    }
    Student temp;
    int i,j;
    for(i=0;i<size;i++)
        for(j=0;j<size-1;j++)
            if(arr[j].grade<arr[j+1].grade){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    printf("\n\n");
    for(int i=0;i<size;i++){
        printf("%s %d %f\n",arr[i].name,arr[i].section,arr[i].grade);
    }
    return 0;
}