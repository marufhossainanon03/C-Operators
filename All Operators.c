 #include <stdio.h>
 #include <conio.h>
 int main() {
  double X, Y;
 

 printf("Enter the first number (X): ");
  scanf("%lf", &X);
  
printf("Enter the second number (Y): ");
scanf("%lf", &Y);

 
 double addition = X + Y;
  printf("Addition: %.2lf\n", addition);

 double subtraction = X - Y;
  printf("Subtraction: %.2lf\n", subtraction);

 double multiplication = X * Y;
  printf("Multiplication: %.2lf\n", multiplication);
 
 if (Y != 0) {
  double division_quotient = X / Y;
  double division_remainder = fmod(X, Y);
  printf("Quotient: %.2lf\n", division_quotient);
  printf("Remainder: %.2lf\n", division_remainder);
 } 
 else {
  printf("Division by zero is undefined.\n");
}
 
 getch ();
 }
 
