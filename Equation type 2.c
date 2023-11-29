#include <stdio.h>
#include <conio.h>

int main() {
    int x;
    double result;

printf("Enter the number: ");
    scanf("%d", &x);


    for (x = 1; x <= 180; x++) {

        result = 6*x+1;

        printf("%3d | %.3lf\n", x, result);
    }

   getch ();
}
