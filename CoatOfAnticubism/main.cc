#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, l;
  cin >> n;
  long total = 0;
  int max = -1;
  for (int i = 0; i < n; i++) {
    cin >> l;
    total += l;
    if (l > max) {
      max = l;
    }
  }
  cout << (max << 1) - total + 1 << endl;
  return 0;
}
