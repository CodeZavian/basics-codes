#include <stdio.h>

int main() {
  int num1, num2;
  int sum,difference,product,division;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

   sum = num1 + num2;
  printf("Sum: %d\n", sum);
  
   product = num1 * num2;
   printf("Product: %d\n", product);
   
  difference = num1 - num2;
  printf("Difference: %d\n", difference);
  
  division= num1 / num2;
  printf("Division: %d\n", division);
}

