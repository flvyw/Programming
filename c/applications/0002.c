#include <stdio.h>

int main() {
  int n;
  printf("Enter Nth Term : ");
  scanf("%d", &n);

  int lt = 0, ct = 1, sum;
  printf("%d\n",lt);
  printf("%d\n",ct);
  for (int i = 0; i < n-2; i++) {
      sum = lt + ct;
      printf("%d\n", sum);
      lt = ct;
      ct = sum;
  }

  return 0;
}