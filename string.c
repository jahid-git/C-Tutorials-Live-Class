#include<stdio.h>

int main(){
    // char arafat[14] = "Arafat Hossen";
    // printf("%s\n", arafat);
    // printf("\n%c", arafat[4]); '\0'

    //char name[6] = {'R', 'a', 's', 'h', 'e', 'd'};
    char name[10] = "Rashed\0"; //{'R', 'a', 's', 'h', 'e', 'd'};

    printf("string name: %s\n", name);

    return 0;
}
