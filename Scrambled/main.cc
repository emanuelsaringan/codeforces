#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

namespace {

int gcd(int a, int b) {
  if (a < b) {
    swap(a, b);
  }
  int c = a / b;
  int d = a % b;

  while (d != 0) {
    a = b;
    b = d;
    c = a / b;
    d = a % b;
  }
  return b;
}

int lcm(int x, int y) {
  return (x * y) / gcd(x, y);
}

}  // namespace

int main() {
  int N;
  int cur_lcm = 1;
  cin >> N;
  vector<int> M(N);
  vector<int> R(N);
  for (int i = 0; i < N; i++) {
    cin >> M[i];
    cur_lcm = lcm(cur_lcm, M[i]);
  }
  for (int i = 0; i < N; i++) {
    cin >> R[i];
  }
  int total = 0;
  for (int d = 0; d < cur_lcm; d++) {
    for (int i = 0; i < N; i++) {
      if (d % M[i] == R[i]) {
        total++;
        break;
      }
    }
  }
  cout << (1.0 * total) / cur_lcm << endl;
  return 0;
}
