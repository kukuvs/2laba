#include <stdio.h>
#include <math.h>

void main() {
  int v = F(-5, -2);
  printf("v = %d", v);

}
int F(m, k) {

  if (k > 0) {
      return m / k;

  } else if (k <= 0 && m < 0) {
      return abs(m+k);

  } else {
      return k * m;
  }

}