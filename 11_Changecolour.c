#include <stdio.h>
void red () {
  printf("\033[1;31m");
}

void yellow() {
  printf("\033[1;33m");
}

void reset () {
  printf("\033[0m");
}

int main () {
  red();
  printf("Hello ");
  yellow();
  printf("world\n");
  reset();
  return 0;
}
// Black \033[0;30m
// Red \033[0;31m
// Green \033[0;32m
// Yellow \033[0;33m
// Blue \033[0;34m
// Purple \033[0;35m
// Cyan \033[0;36m
// White \033[0;37m