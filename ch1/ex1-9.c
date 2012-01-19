#include <stdio.h>

int main()
{
  int c, spacey = 0;

  // this feels convoluted because of what we don't 'know' yet
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      spacey = 1;
    }

    if (c != ' ') {
      if (spacey == 1) { 
        spacey = 0; // then we're no longer in spaces
        putchar(' '); // print one for all those skipped
      }
    }

    if (spacey == 0) {
      putchar(c);
    }

  }
  return 0;
}

