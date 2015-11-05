#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  int total = 0;
  string a;
  for (int i = 0; i < n; i++) {
    cin >> a;
    int num_lucky_digits = 0;
    for (char& c : a) {
      if (c == '4' || c == '7') {
        num_lucky_digits++;
      }
    }
    if (num_lucky_digits <= k) {
      total++;
    }
  }
  cout << total << endl;
}
