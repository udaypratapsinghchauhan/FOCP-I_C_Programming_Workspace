#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in feet: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\nUser Details\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f feet\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}