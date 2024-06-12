#include<stdio.h>

int main(){
    int students[700] = {35, 55, 16, -51, 58};
    students[0] = 50;
    students[1] = 60;

    printf("%d\n", students[0]);
    printf("%d\n", students[1]);
    return 0;
}