#include <stdio.h>
#define SIZE 10
void fill_array(char w[]);
void vowels(char w[]);
int main(){
    char w[SIZE];
    scanf("%s",w);
    vowels(w);
    return 0;
}
void vowels(char w[])
{

    int i,j;
    int count =0;
    char vowels[10] = {'a','o','u','i','e','A','O','U','I','E'};
    for (i=0;i<SIZE;i++){
        for (j=0;j<10;j++){
            if (w[i]==vowels[j])
            {
                count++;
            }

        }

    }
    printf("%d",count);
}