#include <iostream>

using namespace std;

typedef unsigned long long ull;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ull n, x;
  cin >> n >> x;
  int total = 0;
  for (ull i = 1; i <= n; i++) {
    if (i <= x && x <= i * n && x % i == 0) {
      total++;
    }
  }
  cout << total << endl;
  return 0;
}
