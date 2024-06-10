#include <iostream>

void sort(int x1, int y1, int z1, int *min, int *mid, int *max) {
  if (x1 <= y1 && x1 <= z1) {
    *min = x1;
  }
  if (y1 <= x1 && y1 <= z1) {
    *min = y1;
  }
  if (z1 <= x1 && z1 <= y1) {
    *min = z1;
  }
  if (x1 >= y1 && x1 >= z1) {
    *max = x1;
  }
  if (y1 >= x1 && y1 >= z1) {
    *max = y1;
  }
  if (z1 >= x1 && z1 >= y1) {
    *max = z1;
  }
  *mid = (x1 + y1 + z1) - (*min + *max);
}

int main() {
  int x1, y1, z1;
  int x2, y2, z2;
  std::cin >> x1 >> y1 >> z1;
  std::cin >> x2 >> y2 >> z2;

  int min1 = 0, max1 = 0, mid1 = 0;
  int min2 = 0, max2 = 0, mid2 = 0;
  sort(x1, y1, z1, &min1, &mid1, &max1);
  sort(x2, y2, z2, &min2, &mid2, &max2);

  if (min1 == min2 && mid1 == mid2 && max1 == max2) {
    std::cout << "Boxes are equal";
  } else if (min1 <= min2 && mid1 <= mid2 && max1 <= max2) {
    std::cout << "The first box is smaller than the second one";
  } else if (min1 >= min2 && mid1 >= mid2 && max1 >= max2) {
    std::cout << "The first box is larger than the second one";
  } else {
    std::cout << "Boxes are incomparable";
  }

  return 0;
}
