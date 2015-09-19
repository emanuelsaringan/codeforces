#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int M, N;
  cin >> M >> N;
  if (M < N) {
    swap(M, N);
  }
  cout << (M / 2) * N + ((M % 2) * N) / 2 << endl;
  return 0;
}
