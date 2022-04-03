#include <stdio.h>
void myFunction(int,int,int*,int*,int*,int*);
int main()
{   
    int x,y,sum,diff,multi,div;
    printf("Enter X & Y :\n");
    scanf("%d %d",&x,&y);
    myFunction(x,y,&sum,&diff,&multi,&div);
    printf("Sum is %d\n",sum);
    printf("diff is %d\n",diff);
    printf("multiply is %d\n",multi);
    printf("division is %d\n",div);
    return 0;

}
void myFunction(int x,int y,int* sum,int* diff,int* multi,int* div){
    *sum = x+y;
    *diff = x-y;
    *multi = x*y;
    *div = x/y;
}