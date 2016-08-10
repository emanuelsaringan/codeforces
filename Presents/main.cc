#include <iostream>
#include <map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, temp;
  cin >> n;
  map<int, int> m;
  for (int i = 1; i <= n; i++) {
    cin >> temp;
    m[temp] = i;
  }
  for (int i = 1; i <= n; i++) {
    cout << m[i] << " ";
  }
  cout << endl;
  return 0;
}
