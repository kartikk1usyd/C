#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* typedef struct date {
    enum day_name day;
    int day_num;
    enum month_name month;
    int year; 

}; Big_day {
    Mon, 7, Jan, 1980 
};
*/ 

/*struct item {
    char barcode[6];
    const char *name;
    float price;
};
float items_sum(struct item *items, int n){
    float sum = 0;
    int i = 0;
    for (; i < n; i++){
        sum += items[i].price;

    }
    return sum;
}
int main(){
    struct item items[2];

    strncpy(items[0].barcode, "GHF201", 6);
    items[0].name = "big tuna";
    items[0].price = 1.25;

    strncpy(items[1].barcode, "FGT514", 6);
    items[1].name = "Tin can";
    items[1].price = 3.50;

    float sum = items_sum(items, 2);
    printf("sum: %.2f\n", sum);

    return 0;

}
*/

// malloc memory 

/*
int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n, i;

	// Get the number of elements for the array
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n);

	// Dynamically allocate memory using malloc()
	ptr = (int*)malloc(n * sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc.\n");

		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}

	return 0;
}
*/ 

/* void geeks()
{
	// declare variables first yea 
    int var = 20;
 
    // declare pointer variable. this tells the meory alloc 
    int* ptr;
 
    // note that data type of ptr and var must be same
    ptr = &var;
 
    // assign the address of a variable to a pointer
    printf("Value at ptr = %p \n", ptr);
    printf("Value at var = %d \n", var);
    printf("Value at *ptr = %d \n", *ptr);
}
 
// Driver program
int main(int argc, char *argv[])

{
    geeks();
    return 0;
} */

 /* incrementing pointers 
int main()
{
 
    // Declare an array
    int v[3] = { 10, 100, 200 };
 
    // Declare pointer variable
    int* ptr;
 
    // Assign the address of v[0] to ptr
    ptr = v;
 
    for (int i = 0; i < 3; i++) {
 
        // print value at address which is stored in ptr
        printf("Value of *ptr = %d\n", *ptr);
 
        // print value of ptr
        printf("Value of ptr = %p\n\n", ptr);
 
        // Increment pointer ptr by 1
        ptr++;
    }
    return 0;
}
*/

/*
// C Program to access array elements using pointers

#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {
	// assign union to variable
   union Data data;        
	// percent d for number 7
   data.i = 10;
   printf( "data.i : %d\n", data.i);
   
   // float value %f for accuraacy 
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   
   // upper bound is 19 
   strcpy( data.str, "C Programming AryanHi");
   printf( "data.str : %s\n", data.str);

   return 0;
}
*/ 

/*
// establish variables to cases 
enum Level {
  LOW = 2,
  MEDIUM = 3,
  HIGH = 4,
};

// use switch 
int main() {
  enum Level myVar = HIGH; 

  switch (myVar) {
    case 2:
      printf("Im a dumbass");
      break;
    case 3:
      printf("Bro wtaf how");
      break;
    case 4:
      printf("WE HATE RUCHA!");
      break;
  }
  return 0;
}
*/ 

/*
// datatype 
int main(int argc, char *argv[]){
// Create variables
int myNum = 5;             // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);

}
*/ 

/*
#include <stdbool.h> //bool requirement 

int main(int argc, char *argv[]){
// Create boolean variables
bool isProgrammingFun = true;
bool isFishTasty = true;

// Return boolean values
printf("%d\n", isProgrammingFun);   // Returns 1 (true)
printf("%d\n", isFishTasty);        // Returns 0 (false)
} 

*/

/*
// Create a function ////////////// 
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"

*/ 

/*
// define a function // 
void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

// to call the function 
int main(int argc, char *argv[]) {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

*/ 

/*
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[6] = {5, 10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}
*/ 

// #include <math.h>

/*
int main(){
FILE *fptr;

// Create a file
fptr = fopen("vibes.c", "w");

// Close the file
fclose(fptr);
} 
*/

/*
int main(){
FILE *fptr;

// Open a file in append mode
fptr = fopen("Vibes.text", "a");

// Append some text to the file
fprintf(fptr, "Hi everybody!\n");
fprintf(fptr, "my brain is dying from all this coding and im finding amusement in this small time bullshit i call studying!\n");

// Close the file
fclose(fptr); 

}
*/

/*
int main(){
FILE *fptr;

// Open a file in read mode
fptr = fopen("Vibes.txt", "r");

// Store the content of the file
char myString[100];

// Read the content and print it
while(fgets(myString, 100, fptr)) {
  printf("%s", myString);
}

// Close the file
fclose(fptr);
}

*/

/* // if file read has zero 

FILE *fptr;

// Open a file in read mode
fptr = fopen("loremipsum.txt", "r");

// Print some text if the file does not exist
if(fptr == NULL) {
  printf("Not able to open the file.");
}

// Close the file
fclose(fptr);

*/

/*
int main(){
	FILE *fptr;

// Open a file in read mode
fptr = fopen("Vibes.txt", "r");

// Store the content of the file
char myString[100];

// If the file exist
if(fptr != NULL) {

  // Read the content and print it
  while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
  }

// If the file does not exist
} else {
  printf("Not able to open the file.");
}

// Close the file
fclose(fptr);
}

*/ 

/*
// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}

*/ 

/*
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
}

*/
/*
struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}

*/