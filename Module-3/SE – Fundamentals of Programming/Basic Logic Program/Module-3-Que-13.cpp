// Find character value from ascii 
#include <stdio.h>

int main() {
  int ascii_value;
  char character;

  printf("Enter an ASCII value: ");
  scanf("%d", &ascii_value);

  // Convert the ASCII value to a character
  character = ascii_value;

  // Print the character
  printf("The character is: %c\n", character);

  return 0;
}