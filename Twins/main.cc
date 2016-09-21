#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  size_t n;
  cin >> n;
  long total = 0;
  vector<int> coins(n);
  for (size_t i = 0; i < n; i++) {
    cin >> coins[i];
    total += coins[i];
  }
  sort(coins.begin(), coins.end(), std::greater<int>());
  total >>= 1;
  int num_coins = 0;
  long running_total = 0;
  for (int coins_i : coins) {
    running_total += coins_i;
    num_coins++;
    if (running_total > total) {
      break;
    }
  }
  cout << num_coins << endl;
  return 0;
}
