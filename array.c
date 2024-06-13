#include<stdio.h>

int main(){
    int students[700] = {35, 55, 16, -51, 58};
    students[0] = 50;
    students[1] = 60;
    students[5] = 55;
    students[6] = 64;

    printf("%d\n", students[0]);
    printf("%d\n", students[1]);
    printf("%d\n", students[2]);
    printf("%d\n", students[3]);
    printf("%d\n", students[4]);
    printf("%d\n", students[5]);
    printf("%d\n", students[6]);

    float marks[5] = {44.4, 55.6, 656.5, 554.5, 5343.5, 345,5, 4535.54};
    // marks[0] = 56.5;
    // marks[1] = 55.5;
    // marks[2] = 88.3;
    // marks[3] = 66.5;
    // marks[4] = 33.6;
    // marks[5] = 66.5;
    // marks[6] = 54654.54654;
    // marks[7] = 54.54;

    printf("Marks[0] = %f\n", marks[0]);
    printf("Marks[1] = %f\n", marks[1]);
    printf("Marks[2] = %f\n", marks[2]);
    printf("Marks[3] = %f\n", marks[3]);
    printf("Marks[4] = %f\n", marks[4]);
    printf("Marks[5] = %f\n", marks[5]);
    printf("Marks[6] = %f\n", marks[6]);
    printf("Marks[7] = %f\n", marks[7]);
    
    return 0;
}