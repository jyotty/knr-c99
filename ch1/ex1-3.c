#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

int main()
{
  double fahr, celsius;
  int lower = 0;
  int upper = 300;
  int step = 20;

  printf("%s", "Fahr\tCelcius\n");
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}

