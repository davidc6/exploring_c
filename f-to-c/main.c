#include <stdio.h>

const float WATER_FREEZING_POINT = 32.0;
const float NINE_FLOAT = 9.0;
const float FIVE_FLOAT = 5.0;

const int LOWER = 0;
const int UPPER = 300;
const int STEP = 20;

void fToC() {
  float fahrenheit, celsius;
  float lower, upper, step;
  
  fahrenheit = LOWER;
  
  printf("%s | %s\n", "Fahrenheit", "Celsius");

  while (fahrenheit <= UPPER) {
    celsius = (FIVE_FLOAT / NINE_FLOAT) * (fahrenheit - WATER_FREEZING_POINT);
    printf("%3.0fF | %6.1fC\n", fahrenheit, celsius);
    fahrenheit = fahrenheit + STEP;
  }
}

void cToF() {
  float fahrenheit, celsius;
  float lower, upper, step;
  
  celsius = LOWER;
  
  printf("%s | %s\n", "Celsius", "Fahrenheit");
  
  while (celsius <= UPPER) {
    fahrenheit = (celsius * NINE_FLOAT / FIVE_FLOAT) + WATER_FREEZING_POINT;
    printf("%3.0fC | %6.1fF\n", celsius, fahrenheit);
    celsius = celsius + STEP;
  }  
}

void main() {  
  fToC();
  printf("-----------------\n");
  cToF();
}
