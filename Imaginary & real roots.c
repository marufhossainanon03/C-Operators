#include <stdio.h>
#include <conio.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;


    printf("Enter the coefficient 'a': ");
    scanf("%lf", &a);
    printf("Enter the coefficient 'b': ");
    scanf("%lf", &b);
    printf("Enter the coefficient 'c': ");
    scanf("%lf", &c);


    discriminant = b * b - 4 * a * c;


    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots: %.2lf and %.2lf\n", root1, root2);
         } 
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("One real root: %.2lf\n", root1);
       } 
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Imaginary\n");
    }

     getch ();
}

