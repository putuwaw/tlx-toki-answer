#include <stdio.h>
int main(){
  int x1, y1, x2, y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  x1 = x1 - x2;
  y1 = y1 - y2;
  if (x1 < 0) x1 = x1 * -1;
  if (y1 < 0) y1 = y1 * -1;
  printf("%d\n", x1 + y1);
  return 0;
}
