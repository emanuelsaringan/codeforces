#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Pair { int l, r; };
bool comparePair(const Pair& p1, const Pair& p2) { return p1.l < p2.l; }

int main() {
  size_t n, x;
  cin >> n >> x;
  vector<Pair> v;
  for (size_t i = 0; i < n; i++) {
    Pair p;
    cin >> p.l >> p.r;
    v.push_back(p);
  }
  sort(v.begin(), v.end(), comparePair);
  int t = 1;
  size_t total = 0;
  while (!v.empty()) {
    Pair *p = &v[0];
    if (t + x <= p->l) {
      t += ((p->l - t) / x) * x;
    }
    total += p->r - t + 1;
    t = p->r + 1;
    v.erase(v.begin());
  }
  cout << total << endl;
  return 0;
}
