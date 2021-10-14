#include <stdio.h>
#include <stdlib.h>

struct product {char *name; int quantity;};

void print_product(struct product *p) {
  printf("%d %s in stock\n", p -> quantity, p -> name);
}

struct product * make_product(char *n, int q) {
  struct product *p = malloc(sizeof(struct product));

  p -> name = n;
  p -> quantity = q;

  return p;
}

int main() {

  struct product *p = make_product("potato", 5);
  print_product(p);

  free(p);
  return 0;
}