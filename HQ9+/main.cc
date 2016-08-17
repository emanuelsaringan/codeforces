#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string line;
  getline(cin, line);
  bool found = false;
  for (char c : line) {
    if (c == 'H' || c == 'Q' || c == '9') {
      found = true;
      break;
    }
  }
  cout << (found ? "YES" : "NO") << endl;
}
