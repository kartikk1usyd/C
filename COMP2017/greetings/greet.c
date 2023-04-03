#include <stdio.h>

int main (int argc, char **argv){
    char name[15];
    printf("%s", "Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

}

