#include <stdio.h>
#include <math.h>

int main() {
  double radius, height, surface_area, volume;

  radius = 3.0;
  height = 10.0;

  surface_area = 2 * M_PI * radius * height;
  volume = M_PI * pow(radius, 2) * height;
  
  printf("площа бiчної поверхнi: %.21f\n", surface_area);
  printf("об'єм: %.21f\n", volume);
  
  return 0;
}