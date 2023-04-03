#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char **args){
    int x, number;
    printf("Enter height: ");
    x = scanf("%d",&number);

    if(x == 1){
        if(number < 2 || number > 20){
            printf("Invalid height.");
            exit(0);
        }else{
            // code for triangle 
        }
    }else{
        printf("Invalid height.");
        exit(0);
    }
    return 0; 
}