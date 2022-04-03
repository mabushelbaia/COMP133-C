#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define name_length 50
#define maximum 1000
                                                                                                                                                                                                                
/* GLOBAL VARIABLE TO STORE DATA | We used global variable so we don't have to call them in every function */
char fileName[20],rawinput[100],delim[] = "$"; 
int studentsID[maximum];char studentsNames[maximum][name_length];
double studentsGrades[maximum][5],finalscore[maximum] = {0};

/* FUNCTION PROTOTYPES */
void sortById(int size); //ASEC
void sortByName(int size); //ASEC
void sortByScore(int size); //DESC
void printSaveData(int size); 
void linearSearchID(int n,int size);
void linearSearchName(char name[],int size);
void calculation(int size);

int main()
{
    /* Initalizing Input File */
    printf("Please Enter input file name > ");
    scanf("%s",fileName);
    FILE *input = fopen(fileName,"r");

    /* Storing Data In arrays */
    int i,size;
    for(i=0;i<maximum;i++){
        if (fgets(rawinput,100,input) ==  '\0') // Reading Data from file unitl we hit the end of the file
            break;
        char *token;
        token = strtok(rawinput, delim);
        studentsID[i] = atoi(token); // atoi() is a <stdlib.h> function that cast strings into integers to store them into an integer array as requested. 
        token = strtok(NULL , delim);
        strcpy(studentsNames[i],token); // saving each name in names array using strcpy function
        for(int j=0;j<5;j++){ //saving the 5 grades for each student into 2d array
            token = strtok(NULL , delim);
            studentsGrades[i][j] = atof(token); //atoL() is a <stdlib.h> function that cast strings into DOUBLES to store them into a DOUBLE array as requested.
        }
        size = i + 1; //at last we save the data size so we dont waste memory running through the maximum size
    }
    fclose(input); //closing file to save memory
    calculation(size); //calling out the function to calculate the finalscore using the given fourmalla

    /*                   InterFace                             */
    int command;
    while(command != 6){ //stop the program  at input =  6;
        /* USER INTERFACE */        
        printf("\n\n"); 
        printf("1) Sort data in ascending order according to students' IDs and then display it.\n");
        printf("2) Sort data in ascending order according to students' names and then display it.\n");
        printf("3) Sort data in descending order according to students' scores and then display it.\n");
        printf("4) Ask the user to enter a student ID and display his score\n");
        printf("5) Ask the user to enter a student name and display his score\n");
        printf("6) Exit the program\n> ");
        scanf("%d",&command);
        int n;
        char name[name_length];
        switch(command){    
            case (1): 
                sortById(size); // sorting function by id asec
                printSaveData(size); // printing and giving the option wether to save the dara or not
                break;
            case (2):
                sortByName(size); //soring function by name asec
                printSaveData(size);
                break;
            case (3):
                sortByScore(size); // sorting function by finalscore desc
                printSaveData(size);
                break;
            case (4):
                printf("Enter Student ID >");
                scanf("%d",&n); //reading the id we are looking for
                linearSearchID(n,size); //linear search function to print the score of the choseen student
                break;
            case (5):
                printf("Enter Student Name >");
                fflush(stdin); // fflush(stdin) : I used this function to flush the input window before using gets(name),outherwise it would just skip gets() function.
                gets(name); // reading the name we are looking for
                linearSearchName(name,size); // linear search function to print the score of the choseen student
                break;
            case (6):   
                printf("Exiting ..."); // extra UI option
                break;
            default :
                printf("Enter A number from 1 to 6\n"); //message to avoid wrong data input
                break;
        }
    }
    return 0;
}
void printSaveData(int size){
    for(int j=0;j<size;j++){
        printf("%10d\t %-20s\t %0.2f\n",studentsID[j],studentsNames[j],finalscore[j]); //showing the data to the user
    }
    /* UI */
    printf("\nWould You Like To Save The Current Results\n");
    printf("1) Yes\n");
    printf("2) No\n> ");
    int t;
    char outputName[20];
    scanf("%d",&t);
    if(t == 1){ //saving data in a file choseen by user
        printf("Enter File Name> ");
        scanf("%s",outputName);
        FILE *output= fopen(outputName,"w");
        for(int j=0;j<size;j++){
            fprintf(output,"%d\t %s\t %0.2f\n",studentsID[j],studentsNames[j],finalscore[j]);
            }
        fclose(output);
    }
}
void sortById(int size){
    int tempId;
    int i,j;
    double TempScore;
    char tempName[name_length];
    for(i=0;i<size;i++)
        for(j=0;j<size-1;j++)
            if(studentsID[j]>studentsID[j+1]){ //conditon //basic bubble asec sort function for id but we swap the name and finalscore along with it to keep the conjuction of the data
                tempId = studentsID[j]; //swaping id's
                studentsID[j]=studentsID[j+1];
                studentsID[j+1]=tempId;

                TempScore = finalscore[j]; //swaping scores
                finalscore[j]=finalscore[j+1];
                finalscore[j+1]=TempScore;

                strcpy(tempName,studentsNames[j]); //swaping names
                strcpy(studentsNames[j],studentsNames[j+1]);
                strcpy(studentsNames[j+1],tempName);
            }
}
void sortByName(int size){ // same goes for here but the condition is set asec on the name.
    int tempId;
    int i,j;
    double TempScore;
    char tempName[name_length];
    for(i=0;i<size;i++)
        for(j=0;j<size-1;j++)
            if(strcmp(studentsNames[j],studentsNames[j+1])>0){ // condetion : Result>0 : Desc
                tempId = studentsID[j]; //swaping id's
                studentsID[j]=studentsID[j+1];
                studentsID[j+1]=tempId;

                TempScore = finalscore[j]; //swaping scores
                finalscore[j]=finalscore[j+1];
                finalscore[j+1]=TempScore;

                strcpy(tempName,studentsNames[j]); //swapping names
                strcpy(studentsNames[j],studentsNames[j+1]);
                strcpy(studentsNames[j+1],tempName);
            }
}
void sortByScore(int size){ //also same here but the condition is set desc on the score.
    int tempId;
    int i,j;
    double TempScore;
    char tempName[name_length];
    for(i=0;i<size;i++)
        for(j=0;j<size-1;j++)
            if(finalscore[j]<finalscore[j+1]) //condetion
            {
                tempId = studentsID[j]; //swapping id's
                studentsID[j]=studentsID[j+1];
                studentsID[j+1]=tempId;

                TempScore = finalscore[j]; //swapping scores
                finalscore[j]=finalscore[j+1];
                finalscore[j+1]=TempScore;

                strcpy(tempName,studentsNames[j]); //swapping names
                strcpy(studentsNames[j],studentsNames[j+1]);
                strcpy(studentsNames[j+1],tempName);
            }
}
void linearSearchID(int n,int size){
    for(int i=0;i<size;i++) //linear search function for id
        if(n == studentsID[i]){
            printf("\nScore For Student %d : %0.2f",studentsID[i],finalscore[i]);
            return; //get out of the function if the condition is satiisfefd after printing results
        }
    printf("Student Not Found"); //if the condition is not met  

}
void linearSearchName(char name[],int size){
    for(int i=0;i<size;i++) //linear search function for name
        if(strcmp(name,studentsNames[i]) == 0){
            printf("\nScore For Student %-20s : %0.2f",studentsNames[i],finalscore[i]);
            return;//get out of the function if the condition is satisfied after printing results
            }
    printf("Student Not Found");//if the condition is not met
}
void calculation(int size){ //simple fourmalla to calculate the final score based on percentages give in the assignment
    double percenteges[5]={0.15,0.15,0.25,0.10,0.35};
    for(int i=0;i<size;i++){ //loop for the n students.
        for(int j=0;j<5;j++){ //loop for the 5 grades.
            finalscore[i] += studentsGrades[i][j]*percenteges[j];
    }
}
}