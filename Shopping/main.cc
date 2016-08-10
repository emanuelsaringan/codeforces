#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
  int n, m, k, p, a, t = 0;
  deque<int> deq;
  cin >> n >> m >> k;
  for (int i = 0; i < k; i++) {
    cin >> p;
    deq.push_back(p);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a;
      deque<int>::iterator it = find_if(
          deq.begin(), deq.end(), [a](int x){ return x == a; });
      t += distance(deq.begin(), it) + 1;
      deq.erase(it);
      deq.push_front(a);
    }
  }
  cout << t << endl;
  return 0;
}
