#include <stdio.h>
#include <conio.h>
int main() {

    int integerNumber ;
    float floatingNumber ;

    printf("Enter the integer number : ");
    scanf("%d", &integerNumber);

    printf("Enter the float number : ");
    scanf("%f", &floatingNumber);

    int convertedInt = floatingNumber;


    float convertedFloat = integerNumber;

    printf("\nUsing assignment operation:\n");
    printf("Floating to integer: %d\n", convertedInt);
    printf("Integer to floating: %.2f\n", convertedFloat);


    int castedInt = (int)floatingNumber;


    float castedFloat = (float)integerNumber;

    printf("\nUsing type casting:\n");
    printf("Floating to integer: %d\n", castedInt);
    printf("Integer to floating: %.2f\n", castedFloat);

    getch ();
}
