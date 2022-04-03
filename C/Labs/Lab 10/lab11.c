#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    int id;
    int section;
    double grades;
}Student;
int main()
{
//     FILE *output_file = fopen("binaryfile.bin","wb");
//     Student x1 = {10,20,90.9};
//     Student x2 = {11,21,50.9};
//     char name[]={"Hello!"};
//     printf("%d",size);
//     int A=1173;
//     int x[3]={0,1,2};
//     fwrite(&A,sizeof(int),1,output_file);
//     fwrite(x,sizeof(int),3,output_file);
//     fwrite (&x1,sizeof(Student),3,output_file);
//     fwrite (&x2,sizeof(Student),3,output_file);
//     fwrite (name,sizeof(char),strlen(name),output_file);
//     fclose(output_file);
    FILE *input_file = fopen("binaryfile.bin","rb");
    Student x1;
    Student x2;
    char name[5];
    int A;
    int x[3];
    fread(&A,sizeof(int),1,input_file);
    fread(x,sizeof(int),3,input_file);
    fread(&x1,sizeof(Student),3,input_file);
    fread(&x2,sizeof(Student),3,input_file);
    fread (name,sizeof(char),5,input_file);
    printf("\n");
    printf("%d %d %d %d \n",A,x[0],x[1],x[2]);
    printf("%d %d %lf\n",x1.id,x1.section,x1.grades);
    printf("%d %d %lf\n",x2.id,x2.section,x2.grades);
    printf("%s\n",name);
    
    fclose(input_file);
    return 0;
}