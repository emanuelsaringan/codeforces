#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int dx = abs(x1 - x2);
  int dy = abs(y1 - y2);
  cout << min(dx, dy) + abs(dx - dy) << endl;
  return 0;
}
