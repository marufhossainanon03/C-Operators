#include<stdio.h>
#include <conio.h>
int main()
{
	int a , b ;

    printf("Enter the first number (X): ");
    scanf("%d", &a);

    printf("Enter the second number (Y): ");
    scanf("%d", &b);


	a += b;
	printf("\nincrement [a += b] : %d",a);
	a = 5, b = 10;
	b -= a;
	printf("\ndecrement [b -= a] : %d",-b);

getch ();

}
