#include <stdio.h>

/* reverse of listing 3, C to F for 
 * for celsius = -10, 0, ..., 150 */

int main()
{
  double fahr, celsius;
  int lower = -10;
  int upper = 150;
  int step = 10;

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * (9.0/5.0) + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}

