//.Find ascii value of given number

#include <stdio.h>

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  // Find the ASCII value of the number
  char character = number + '0';
  int asciiValue = character;

  // Print the ASCII value
  printf("The ASCII value of %d is %d\n", number, asciiValue);

  return 0;
}