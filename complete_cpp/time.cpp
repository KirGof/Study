#include <iostream>

int main() {
  int x;
  std::cin >> x;
  int h, m, s;
  h = x / 3600 % 24;
  m = x % 3600 / 60;
  s = x % 60;

  std::cout << h;
  std::cout << ":";
  std::cout.fill('0');
  std::cout.width(2);
  std::cout << m;
  std::cout << ":";
  std::cout.fill('0');
  std::cout.width(2);
  std::cout << s << std::endl;
  return 0;
}
