#include <stdio.h>

/* print F to C conversion table
*/
void main() {
  int fahrenheit;
  int celsius;
  int lower;
  int upper;
  int step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  fahrenheit = lower;
  
  while (fahrenheit <= upper) {
    celsius = 5 * (fahrenheit - 32) / 9;
    printf("%d F\t%d C\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + step;
  }
}
