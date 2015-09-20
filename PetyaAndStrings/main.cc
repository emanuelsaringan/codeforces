#include <cctype>
#include <iostream>

using namespace std;

namespace {

int Compare(const string& a, const string& b) {
  for (int i = 0; i < a.size(); i++) {
    int diff = toupper(a[i]) - toupper(b[i]);
    if (diff < 0) {
      return -1;
    } else if (diff > 0) {
      return 1;
    }
  }
  return 0;
}

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string a, b;
  cin >> a >> b;
  cout << Compare(a, b) << endl;
  return 0;
}
