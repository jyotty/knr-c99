#include <stdio.h>

int main()
{
  int ret;

  // `suggest parentheses around assignment used as truth value' ... ok:
  while ((ret = getchar() != EOF)) {
    printf("%d\n", ret); // 1
  }
  
  printf("%d\n", ret); // 0

  return 0;
}

