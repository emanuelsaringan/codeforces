#include <iostream>

using namespace std;

typedef long long ll;

namespace {

bool IsLucky(ll n) {
  if (n < 0) {
    n = -n;
  }
  while (n != 0) {
    if (n % 10 == 8) {
      return true;
    }
    n /= 10;
  }
  return false;
}

ll FindLucky(ll a) {
  int b = 1;
  while (!IsLucky(a + b)) {
    b++;
  }
  return b;
}

}  //namespace

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  ll a;
  cin >> a;
  cout << FindLucky(a) << endl;
  return 0;
}
