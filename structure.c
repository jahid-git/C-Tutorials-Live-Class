#include<stdio.h>
#include<string.h>

typedef struct {
    char name[25];
    int age;
    float height;
    int weight;
} Person;

typedef struct {
    Person driver;
    int weight;
    int wheel;
    int light;
} Car;

int main(){
    
    Person jahid;
    strcpy(jahid.name, "Jahid Hasan");
    jahid.age = 22;
    jahid.height = 4.4;
    jahid.weight = 65;

    printf("Name is: \t%s\n", jahid.name);
    printf("Age is: \t%d\n", jahid.age);
    printf("Height is: \t%.1f\n", jahid.height);
    printf("Weight is: \t%d\n\n", jahid.weight);
    

    printf("-----------------------\n");


    Person arafat;
    strcpy(arafat.name, "Arafat Islam");
    arafat.age = 25;
    arafat.height = 5.8;
    arafat.weight = 70;

    printf("Name is: \t%s\n", arafat.name);
    printf("Age is: \t%d\n", arafat.age);
    printf("Height is: \t%.1f\n", arafat.height);
    printf("Weight is: \t%d\n\n", arafat.weight);


    printf("-----------------------\n");


    Person rafid;
    strcpy(rafid.name, "Rafid Ahmed");
    rafid.age = 30;
    rafid.height = 6.0;
    rafid.weight = 75;

    printf("Name: \t\t%s\n", rafid.name);
    printf("Age: \t\t%d\n", rafid.age);
    printf("Height: \t%.1f\n", rafid.height);
    printf("Weight: \t%d\n\n", rafid.weight);


    printf("-----------------------\n");

    Car myCar;
    myCar.driver = arafat;
    myCar.weight = 1500;
    myCar.wheel = 4;
    myCar.light = 4;

    printf("Car Driver: \t%s\n", myCar.driver.name);
    printf("Driver's Age: \t%d\n", myCar.driver.age);
    printf("Driver's Height: %.1f\n", myCar.driver.height);
    printf("Driver's Weight: %d\n\n", myCar.driver.weight);

    printf("Car Weight: \t%d\n", myCar.weight);
    printf("Number of Wheels: %d\n", myCar.wheel);
    printf("Number of Lights: %d\n", myCar.light);

    return 0;
}