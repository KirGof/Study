#include <iostream>

int main() {

  int a, b, c, d;
  int x;
  std::cin >> x;
  a = x / 1000;
  b = x / 100 % 10;
  c = x / 10 % 10;
  d = x % 10;
  int res = ((a - d) * (a - d)) + ((b - c) * (b - c)) + 1;
  std::cout << res << std::endl;
  return 0;
}
