#include <iostream>

int main() {
  int H;
  int A;
  int B;
  std::cin >> H >> A >> B;
  int res = 0;
  int count = 0;
  int buff = A - B;
  while (true) {
    if (res + A >= H) {
      count++;
      break;
    }
    res += buff;
    count++;
  }
  printf("%d", count);
}
