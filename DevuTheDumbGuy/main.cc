#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long ull;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, x;
  cin >> n >> x;
  vector<int> chapters(n);
  for (int i = 0; i < n; i++) {
    cin >> chapters[i];
  }
  sort(chapters.begin(), chapters.end());
  unsigned long long total = 0;
  for (int i = 0; i < n; i++) {
    total += max(x--, 1) * static_cast<ull>(chapters[i]);
  }
  cout << total << endl;
  return 0;
}
