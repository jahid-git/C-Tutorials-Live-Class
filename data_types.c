#include<stdio.h>
int main(){
    /*
        Number are 2 types:
            1) Integer Type (short, int, long, long long) --> .............-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5............
            2) Fraction Type (float, double)--> all point number are fraction type number
    */

    short short_integer_number = 10154;
    int int_integer_number = 10151454;
    long long_integer_number = 101514484;
    long long long_long_integer_number = 101455454455844LL;

    float float_fraction_number = 3.14159f;
    double double_fraction_number = 3.141592653589793;

    printf("Print short integer number: %hd\n", short_integer_number);
    printf("Print int integer number: %d\n", int_integer_number);
    printf("Print long integer number: %ld\n", long_integer_number);
    printf("Print long long integer number: %lld\n", long_long_integer_number);

    printf("Print float fraction number: %f\n", float_fraction_number);
    printf("Print double fraction number: %lf\n", double_fraction_number);


    printf("\n%zu\n", sizeof(long_long_integer_number));


    int firstNumber;
    firstNumber = 50.56;
    printf("\n\nFirst number: %d\n\n", firstNumber);
    firstNumber = 60;
    printf("\n\nFirst number: %d\n\n", firstNumber);
    firstNumber = 70;
    printf("\n\nFirst number: %d\n\n", firstNumber);


    float floatNumber = 50;
    printf("\n\nFloat number: %.3f\n\n", floatNumber);

    double doubleNumber = 50.605654;
    printf("\n\nDouble number: %.5lf\n\n", doubleNumber);


    char ch = 'A';
    printf("\n\n%c\n", ch);
    printf("\n\n%zu\n", sizeof(ch));

    return 0;
}