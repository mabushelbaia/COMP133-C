#include <stdio.h>
void sum(int a[4][4],int b [4][4],int c[4][4]);
int main(){
    int a[4][4]={{1,2,3,4},{10,20,30,40},{100,200,300,400},{15,25,35,45}};
    int b[4][4]={{5,6,7,7},{11,25,31,41},{50,70,900,4600},{105,205,305,405}};
    int c[4][4];
    sum(a,b,c);
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
        }
    return 0;
}
void sum(int a[][4],int b[][4],int c[][4]){
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            c[i][j]=a[i][j]+b[i][j];

}