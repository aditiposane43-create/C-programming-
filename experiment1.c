#include <stdio.h>

int main()
{
    int age;
    float marks;
    char grade;
    double salary;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your salary: ");
    scanf("%lf", &salary);

    printf("\n--- Entered Details ---\n");
    printf("Age = %d\n", age);
    printf("Marks = %.2f\n", marks);
    printf("Grade = %c\n", grade);
    printf("Salary = %.2lf\n", salary);

    return 0;
}