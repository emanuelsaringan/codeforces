#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  unsigned long long n;
  cin >> n;
  if (n % 2 == 0) {
    cout << "2";
  } else {
    cout << "1";
  }
  cout << endl;
  return 0;
}
