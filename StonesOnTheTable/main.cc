#include <iostream>
#include <iterator>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  string stones;
  cin >> stones;

  string::iterator iter = stones.begin();
  while (iter != stones.end()) {
    while (*iter == *(iter + 1)) {
      stones.erase(iter + 1);
    }
    iter++;
  }
  cout << n - stones.size() << endl;
  return 0;
}
