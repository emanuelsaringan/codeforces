#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int a_i;
    cin >> a_i;
    if (a_i > 0) {
      a.push_back(a_i);
    }
  }
  sort(a.begin(), a.end());
  int cutoff = a.size() >= k ? a[a.size() - k] : 0;
  int total = 0;
  for (int a_i : a) {
    if (a_i >= cutoff) {
      total++;
    }
  }
  cout << total << endl;
  return 0;
}
