#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  if (a < b + c && b < c + a && c < a + b) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  };

  return 0;
}
