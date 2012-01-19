#include <stdio.h>

#define IN  1
#define OUT 0

// print one word per line; straightforward manipulation of wc example
int main()
{
  int c;

  int state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        putchar('\n');
      }
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      putchar(c);
    } else {
      putchar(c);
    }
  }
  
  return 0;
}

