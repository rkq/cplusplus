#include <algorithm>
#include <vector>

void Reorder(std::vector<int>& v) {
  int i = 0;
  int j = v.size() - 1;
  while (i < j) {
    while (i < v.size() && (v[i] & 0x1) != 0) {
      ++i;
    }
    while (j >= 0 && (v[j] & 0x1) == 0) {
      --j;
    }
    if (i < j) {
      std::swap(v[i], v[j]);
    }
  }
}
