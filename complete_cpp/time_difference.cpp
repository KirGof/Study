#include <iostream>

int main() {
  int h1, m1, s1;
  int h2, m2, s2;
  std::cin >> h1 >> m1 >> s1;
  std::cin >> h2 >> m2 >> s2;

  int sum1 = h1 * 3600 + m1 * 60 + s1;
  int sum2 = h2 * 3600 + m2 * 60 + s2;

  std::cout << sum2 - sum1 << std::endl;

  return 0;
}
