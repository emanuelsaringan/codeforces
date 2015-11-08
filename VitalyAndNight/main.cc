#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, w1, w2;
  int total = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> w1 >> w2;
      if (w1 != 0 || w2 != 0) {
        total++;
      }
    }
  }
  cout << total << endl;
  return 0;
}
