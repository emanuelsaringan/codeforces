#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, p_i;
  cin >> n;
  double total = 0.0;
  for (size_t i = 0; i < n; i++) {
    cin >> p_i;
    total += p_i;
  }
  cout << setprecision(12) << fixed << (total / n) << endl;
}
