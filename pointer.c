#include<stdio.h>
int main(){
    int theNumber = 50;

    int *pointerOfTheNumber = &theNumber;

    printf("The number is: %d\n", theNumber);
    printf("Size of the number: %zu bytes\n", sizeof(theNumber));

    printf("Memory address of the number: %p\n", &theNumber);

    printf("Memory address of the number: %p\n", pointerOfTheNumber);
    
    printf("Value of the number: %d\n", *pointerOfTheNumber);

    *pointerOfTheNumber = 60;

    printf("Value of the number: %d\n", theNumber);

    return 0;
}