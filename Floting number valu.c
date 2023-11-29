#include <stdio.h>
#include <conio.h>

int main() {
    double X, A, B, C;


    printf("Enter a floating-point number X: ");
    scanf("%lf", &X);


    A = ceil(X);
    B = floor(X);
    C = fabs(X);


    printf("A (rounded up): %.2lf\n", A);
    printf("B (rounded down): %.2lf\n", B);
    printf("C (absolute value): %.2lf\n", C);

     getch ();
}

