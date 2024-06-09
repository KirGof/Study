#include <iostream>

int main() {
  int V, T;
  std::cin >> V >> T;

  int res = 0;

  if (V > 0) {
    res = V * T % 109;
  }
  if (V < 0) {
    V = -V;
    int buff = V * T % 109;
    if (buff % 109 == 0) {
      res = 0;
    } else {
      res = 109 - buff;
    }
  }

  std::cout << res << std::endl;
  return 0;
}
