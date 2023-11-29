#include <stdio.h>
#include <conio.h>
int main() {
    int a, b, c;


    printf("Enter the value of 'a': ");
    scanf("%d", &a);
    printf("Enter the value of 'b': ");
    scanf("%d", &b);
    printf("Enter the value of 'c': ");
    scanf("%d", &c);


    int statement1 = (a > b && b < c);
    int statement2 = (a == b || b == c);
    int statement3 = !(a < b && a > c);


    printf("Statement 1: %d\n", statement1);
    printf("Statement 2: %d\n", statement2);
    printf("Statement 3: %d\n", statement3);

    getch ();
}

