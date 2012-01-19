#include <stdio.h>

// count lines in input
int main()
{
  int c;
  int nl = 0, tabs = 0, blanks = 0;

  while ((c = getchar()) != EOF) {
    // we haven't ``learned'' else statements. eh.
    if (c == '\n') {
      ++nl;
    }
    if (c == '\t') {
      ++tabs;
    }
    if (c == ' ') {
      ++blanks;
    }
  }

  printf("%d blanks, %d tabs, %d newlines\n", blanks, tabs, nl);
  
  return 0;
}

