#include <stdio.h>

int areAllEqual(int x, int y, int z) {
  if (x == y && y ==z) {
    return 1;
  } else {
    return 0;
  }
}

int main() {

  int x, y, z;
  
  printf("Enter x: ");
  scanf("%d", &x);
  printf("Enter y: ");
  scanf("%d", &y);
  printf("Enter z: ");
  scanf("%d", &z);

  int result = areAllEqual(x, y, z);

  printf("Result: %d\n", result);
  
  return 0;
}