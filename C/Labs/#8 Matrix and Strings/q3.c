#include <stdio.h>
#include <string.h>
void hydroxide(char c[]);
int main(){
    char c[10];
    while(5){
        scanf("%s",&c);
        hydroxide(c);
    }
    return 0;
}
void hydroxide(char c[]){
        int index = strlen(c);
        if (c[index-1] == 'H' && c[index-2] == 'O'){
                printf("hydroxine\n");
        }
        else{
                printf("Not Hydroxine\n");
        }

}