#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, l;
  cin >> n >> l;
  vector<int> lanterns(n);
  for (size_t i = 0; i < n; i++) {
    cin >> lanterns[i];
  }
  sort(lanterns.begin(), lanterns.end());
  int max_len = 0;
  for (size_t i = 0; i < lanterns.size() - 1; i++) {
    int len = lanterns[i + 1] - lanterns[i];
    if (len > max_len) {
      max_len = len;
    }
  }
  double max_radius = max_len / 2.0;
  if (lanterns.front() > max_radius) {
    max_radius = lanterns.front();
  }
  if (l - lanterns.back() > max_radius) {
    max_radius = l - lanterns.back();
  }
  cout << setprecision(10) << max_radius << endl;
}
