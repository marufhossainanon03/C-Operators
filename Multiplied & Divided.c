#include <stdio.h>
#include <conio.h>
int main() {
   double x , y ;

    printf("Enter the first number (X): ");
    scanf("%lf", &x);

    printf("Enter the second number (Y): ");
    scanf("%lf", &y);

    x *= y;
    printf("X multiplied by y: %.2lf\n", x);


    x /= y;
    printf("X divided by y: %.2lf\n", x);

  getch ();
}
