#include <stdio.h>


int u(int n) {

  if (n == 0) {
    return 1;

  } 
  else if (n == 1) {
    return 2;

  } 
  else {
    return 2 * u(n-1) - 3 * u(n-2);
  }
}

int main() {
  int n;
  printf("Digite um número inteiro: ");
  scanf("%d", &n);
  printf("u(%d) = %d", n, u(n));

  return 0;
}