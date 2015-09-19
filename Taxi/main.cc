#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, s_i;
  vector<int> tally(5);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s_i;
    tally[s_i]++;
  }

  // Use up 3s.
  while (tally[3] != 0) {
    if (tally[1] != 0) {
      tally[1]--;
    }
    tally[3]--;
    tally[4]++;
  }

  // Use up 2s.
  tally[2] += tally[1] / 2;
  tally[1] = tally[1] % 2;
  tally[4] += tally[2] / 2;
  tally[2] = tally[2] % 2;

  if (tally[2] + tally[1] > 0) {
    tally[4]++;
  }
  cout << tally[4] << endl;
  return 0;
}
