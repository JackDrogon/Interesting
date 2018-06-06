#include <stdio.h>

int runtime·goos = 10;

int main() {
  printf("%d\n", runtime·goos);
  return 0;
}
