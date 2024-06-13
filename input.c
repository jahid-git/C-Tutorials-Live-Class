#include <stdio.h>
#include <stdlib.h>

int main() {
    int number1, number2;
    char ch;
    char userName[20];
    
    printf("Enter number1:");
    scanf("%d", &number1);
    printf("The number1: %d\n", number1);
    
    while (getchar() != '\n');
    
    printf("Enter number2:");
    scanf("%d", &number2);
    printf("The number2: %d\n", number2);
    
    while (getchar() != '\n');
    
    printf("\n-----------------------\n");
    
    printf("Enter the ch:");
    scanf(" %c", &ch);
    printf("The ch is: %c\n", ch);
    
    while (getchar() != '\n');
    
    printf("\n-----------------------\n");
    
    printf("Enter your name:");
    fgets(userName, sizeof(userName), stdin);
    printf("Your name is: %s\n", userName);

    printf("\n--------End---------\n");
    return 0;
}