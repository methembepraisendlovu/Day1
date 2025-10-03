#include <stdio.h>



int main() {

    char name[100];

    int age;

    char hobby[100];



    printf("Enter your name: ");

    scanf("%99s", name);



    printf("Enter your age: ");

    scanf("%d", &age);



    printf("Enter your favorite hobby: ");

    scanf("%99s", hobby);



    printf("Hello, %s! You are %d years old and enjoy %s.\n", name, age, hobby);



    return 0;

}


