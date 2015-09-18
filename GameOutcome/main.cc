#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<vector<int>> matrix;
  vector<int> row_sums(n);
  vector<int> col_sums(n);
  matrix.resize(n);
  for (int i = 0; i < n; i++) {
    matrix[i].resize(n);
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      matrix[i][j] = x;
      row_sums[i] += x;
      col_sums[j] += x;
    }
  }

  int total = 0;
  for (int i = 0; i < n; i++) {
    int row_sum = row_sums[i];
    for (int j = 0; j < n; j++) {
      if (row_sum < col_sums[j]) {
        total++;
      }
    }
  }
  cout << total << endl;
  return 0;
}
