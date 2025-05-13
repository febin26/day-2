#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int age;
    float salary;
     
    printf("Enter name: ");
    scanf(" %[^\n]s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("\nName: %s", name);
    printf("\nAge: %d", age);
    printf("\nSalary: %.2f\n", salary);
}


   