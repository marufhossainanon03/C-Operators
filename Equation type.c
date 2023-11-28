#include <stdio.h>
#include <conio.h>
int main() {
    double a,b,c;
    double x,y,z;


    printf("Enter the value of 'a': ");
    scanf("%lf", &a);
    printf("Enter the value of 'b': ");
    scanf("%lf", &b);
    printf("Enter the value of 'c': ");
    scanf("%lf", &c);

    double c_squared = c * c;





    x = a - b / 3 + c_squared - 1;
    y = a - ((b / 3 + c)*(b / 3 + c))- 1;
    z = a - ((b / 3)+ c_squared)- 1;

    printf("The result of the equation is x: %.lf\n", x);
    printf("The result of the equation is y: %.lf\n", y);
    printf("The result of the equation is z: %.lf\n", z);

    getch ();
}

