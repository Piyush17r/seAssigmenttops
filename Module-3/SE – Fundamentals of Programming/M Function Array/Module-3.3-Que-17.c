//WAP to show difference between Structure and Union. 
#include <stdio.h>

// Structure definition
struct Person {
    char name[50];
    int age;
};

// Union definition
union Data {
    int num;
    float price;
};

int main() {
    // Structure usage
    struct Person person1;
    person1.age = 30;
    printf("Age of person1: %d\n", person1.age);

    // Union usage
    union Data data1;
    data1.num = 10;
    printf("Value of data1.num: %d\n", data1.num);
    data1.price = 20.5;
    printf("Value of data1.price: %.2f\n", data1.price);

    return 0;
}
