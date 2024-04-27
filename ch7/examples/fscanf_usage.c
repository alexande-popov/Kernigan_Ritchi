#include <stdio.h>

int main() {
  FILE* f = fopen("input.txt", "r");
  unsigned int x;
  char s[100];
  float pi;
  int n = fscanf(f, "hex: %x, s = %s\nfloat <- %f", &x, s, &pi);
  fclose(f);

  printf("x = %d, s = %s, pi = %f, n = %d", x, s, pi, n);

  return 0;
}