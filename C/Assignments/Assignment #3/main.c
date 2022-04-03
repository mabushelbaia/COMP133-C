/* Libraries */
#include <stdio.h> 
#include <string.h>

/* FUNCTION PROTOTYPES */
void histogram (int counters[]); 
void removeSpaces(char a[]);

#define MAX 100000 // Maximum Size of charachters.
int main(){
    char story[MAX]; // Array To store the string.
    char letters[]={ //alphabet array
        'a','b','c','d','e','f','g','h',
        'i','j','k','l','m','n','o','p',
        'q','r','s','t','u','v','w','x','y','z'
    };
    int counters[26]={0}; // Initatilize a counter array with 26 charachters with value 0.

    /* Opening file */
    FILE *input;
    input = fopen("story.txt","r");
    
    while(fgets(story,MAX,input) != NULL)  // Reading Data from the the file and saving it in story[].
    {

        /* Loop To compare each charachter in the array with the alphapet */
        for(int i=0;story[i];i++) // Instated Of using i<strlen(story) I used story[i] which do the same.
            for(int j=0;j<26;j++)
            {
                /* Condition to add each charachter that match the alphabet to the 
                counter by saving it into the index of the letter */
                if(story[i]==letters[j]) 
                    counters[j]++;
            }
    }
    printf("\n -- OUTPUT -- \n\n");
    for(int i=0;i<26;i++) //loop to print the output data
        printf("%c was used %d times\n",i+97,counters[i]); //(i+97) to print the alphabet letters , counters[i] to print # of times eah letter occures
    histogram(counters); //caling hisogram function
    fclose(input); //closing the file
    return 0;
}
/* FUNCTION TO PRINT HIStTGRAM WITH LETTERS COUNTERS */
void histogram (int counters[]){
    printf("\n -- HIStOGRAM -- \n\n");
    for(int i=0;i<26;i++){
        printf("%c : ",i+97); // to print the alphabet letters
        for(int j=0;j<counters[i];j++) //printing ■ the number of times each letter occures
            printf("%c",254);
        printf("\n");
    }
}
