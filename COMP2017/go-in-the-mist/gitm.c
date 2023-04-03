// name: Kartik
// unikey: knai5306
// SID: 510611749

// code here
#define SIZE 19
#define BUFFERSIZE 16

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h> 

bool includes(char array[], int length, char value);

// comment out for loop
// board build
int main(int argc, char *argv[]) {
   char board[SIZE][SIZE];
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < 19; j++) {
            board[i][j] = '.';
            printf("%c ", board[i][j]); // to visualize board 
        }
        printf("\n");
   } 
    char command[BUFFERSIZE];
    while(fgets(command, BUFFERSIZE, stdin) != NULL) {
        // command equtes to prompts
        //printf("%s\n", command);
        char first[10];
        char second[10];
        sscanf(command, "%s %s", first, second);
        char current[5] = "B";

        // who
        if(strcmp(first, "who") == 0) {
            if(strcmp(current, "B") == 0){
                printf("%s", "B\n");
            } else{
                printf("%s", "W\n");
            }
            //printf("who works");
        }
        //place
        if(strcmp(first, "place") == 0) {
            printf("place works \n");
            
        }
        //history
        if(strcmp(first, "history") == 0) {
            printf("history works \n");
            
        }
        //resign 
        if(strcmp(first, "resign") == 0) {
            if(strcmp(current, "B") == 0){
                printf("%s", "White wins! \n");
                printf("%s", "Thank you for playing! \n");
                exit(0);
            } else{
                printf("%s", "Black wins! \n");
                printf("%s", "Thank you for playing! \n");
                exit(0);
            }
            //printf("resign works");
        }
        if(strcmp(first, "view") == 0) {
            printf("view works \n");

            //printf("term works");
        }
        if(strcmp(first, "term") == 0) {
            exit(0);
        }
        
    }

    return 0;
}
        
/*
// fgets == line by line input 
// sscanf
// 

// who command- who command can be executed to show who is the current player. One character will be displayed,
//either B for Black stone or W for White stone.
//This command can be executed at any time.

int who(){

}

// term 
// forces to terminate with exit code 1, suppress history and
// the exit message\
//character array


bool includes(char array[], int length, char value){
    for(int i=0; i<length; i++){
        if(array[i] == value) return true;
    }
    return false;

}
int term(){
    if(includes(commands, length , "term"))
        exit(); 
}

// term should be in main 


int resign(){
    char command; 
    command = getchar();
    if(command == 'resign'){
        printf("Thank you for playing! \n");
        printf("Thank you for playing! \n");
        exit(0);
    }
    return 0;
}
//sscanf 

// view to see current 7X7 board
int view(){

}

// movement
int place(){

}

// past moves 
int history(){
    int array[20];
    int i;
    printf("Enter value to be stored in array> ");
    for (i=0;i<20;i++){
        scanf("%d,",&(array[i]));
    }
    for (i=0;i<20;i++){
        if (i==19){
            printf("%d\n",array[i]);
        }
        else{
            printf("%d, ",array[i]);
        }
    }
    return 0;
}
// accoridng to "valid"

// terminate and thanks for playing 
int end(){
    char command; 
    if(command == 'end'){
        printf("Thank you for playing! \n");
        exit(0);
    }
    return 0;
} 

// exit command 
void exit(){
    printf("Thanks for playing!");
    exit(0);
}
*/

