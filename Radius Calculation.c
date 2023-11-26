#include <stdio.h>
#include <conio.h>
int main() {
    double r,a;
    double Pi=3.1416;


    printf("Enter the radius: ");
    scanf("%lf", &r);

     a = 2 * Pi * r;

     printf("Area is:%.2lf",a);

    getch ();
}
