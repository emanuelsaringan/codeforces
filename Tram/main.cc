#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a, b, total = 0, max = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    if (total > max) {
      max = total;
    }
    total -= a;
    total += b;
  }
  cout << max << endl;
  return 0;
}
