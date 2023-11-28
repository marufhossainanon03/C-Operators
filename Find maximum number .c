#include <stdio.h>
#include <conio.h>
int main() {
    double num1, num2;


    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);


    double max = (num1 > num2) ? num1 : num2;
    printf("The maximum of %.lf and %.lf is: %.lf\n", num1, num2, max);

    getch ();
}

