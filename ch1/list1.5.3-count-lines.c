#include <stdio.h>

// count lines in input
int main()
{
  int c;
  int nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    }
  }

  printf("%d\n", nl);
  
  return 0;
}

