#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, m, mj;
  cin >> n >> k;
  vector<vector<int>> v(k);
  int total_time = 0;
  for (int i = 0; i < k; i++) {
    cin >> m;
    vector<int>& vi = v[i];
    for (int j = 0; j < m; j++) {
      cin >> mj;
      vi.push_back(mj);
    }
    if (vi[0] == 1) {
      int cur_num = 0;
      while (vi[0] == cur_num + 1) {
        cur_num = vi[0];
        vi.erase(vi.begin());
      }
      if (!vi.empty()) {
        total_time++;
      }
    }
  }
  for (int i = 0; i < k; i++) {
    if (!v[i].empty()) {
      total_time += (2 * v[i].size() - 1);
    }
  }
  cout << total_time << endl;
  return 0;
}
