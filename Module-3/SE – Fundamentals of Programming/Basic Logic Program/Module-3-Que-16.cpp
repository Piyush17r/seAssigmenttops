//Convert country’s name in abbreviate form 

#include <stdio.h>
#include <string.h>

int main() {
  char country_name[50];
  char country_abbreviation[5];

  printf("Enter the country name: ");
  scanf("%s", country_name);

  // Convert the country name to uppercase.
  strupr(country_name);

  // Get the first two letters of the country name.
  country_abbreviation[0] = country_name[0];
  country_abbreviation[1] = country_name[1];
  country_abbreviation[2] = '\0';

  // Print the country abbreviation.
  printf("The country abbreviation is: %s\n", country_abbreviation);

  return 0;
}