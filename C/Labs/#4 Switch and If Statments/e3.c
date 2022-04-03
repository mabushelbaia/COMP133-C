#include <stdio.h>
int main(){
    char le;
    printf("Please Enter The Letter\n");
    scanf("%c",&le);
    if (le == 'a' || le == 'e' || le == 'i' || le == 'o' || le == 'u'){ //add capital letters
        printf("Vowel\n");
    }
    else {
        printf("Constant\n");
    }
    return 0;
}