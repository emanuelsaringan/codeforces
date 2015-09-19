#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, p, v, t, total = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> p >> v >> t;
    if (p + v + t > 1) {
      total++;
    }
  }
  cout << total << endl;
  return 0;
}
