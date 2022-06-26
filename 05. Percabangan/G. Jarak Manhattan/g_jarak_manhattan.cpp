#include <iostream>
int main(){
  int x1, y1, x2, y2;
  std::cin >> x1 >> y1 >> x2 >> y2;
  x1 = x1 - x2;
  y1 = y1 - y2;
  if (x1 < 0) x1 = x1 * -1;
  if (y1 < 0) y1 = y1 * -1;
  std::cout << x1 + y1 << std::endl;
  return 0;
}
