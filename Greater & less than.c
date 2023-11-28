#include <stdio.h>
#include<conio.h>

int main()

{

int x, y;

printf("Input an integer value for x: ");

scanf_s("%d", &x, 1);

printf("Input an integer value for y: ");

scanf_s("%d", &y, 1);

if (x == y)
{
printf("%d is equal to %d\n",x,y);
}
else
if (x > y)
{
printf("%d is greater than %d \n",x,y);
}
else
{
printf("%d is less than %d \n",x,y);
}


 getch ();

}
