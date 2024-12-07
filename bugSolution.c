#include <stdio.h>

int main() {
  int x = 10;
  int y = 5;
  float z = (float)x / y; //Explicit cast of x to a float
  printf("%.2f", z); // Print using a format specifier for floating point values
  return 0;
}

//Alternative, preserving integer type but handling the remainder
#include <stdio.h>

int main(){
  int x = 10;
  int y = 5;
  int z = x/y;
  int remainder = x % y; // Use modulo operator to get the remainder 
  printf("Quotient: %d, Remainder: %d",z, remainder);
  return 0;
}