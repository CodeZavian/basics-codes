#include <stdio.h>

int main() {

  char operation;
  int  first, second;
  printf("Enter number (+, -, *, /): ");
  scanf("%c", &operation);
  printf("Enter two operands: ");
  scanf("%d %d", &first, &second);

  switch (operation) {
    case '+':
      printf("%d + %d = %d", first, second, first + second);
      break;
    case '-':
      printf("%d -  %d = %d", first, second, first - second);
      break;
    case '*':
      printf("%d x %d = %d", first, second, first * second);
      break;
    case '/':
      printf("%d / %d = %d ", first, second, first / second);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
