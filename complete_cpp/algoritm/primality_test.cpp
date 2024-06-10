#include <cstdint>
#include <iostream>

bool prime(std::int64_t x) {
  bool flag = true;
  for (std::int64_t i = 2; i * i < x; i++) {
    if (x % i == 0) {
      flag = false;
      break;
    }
  }
  return flag;
}

int main() {
  std::int64_t x;
  std::cin >> x;
  std::cout << prime(x);
  return 0;
}
