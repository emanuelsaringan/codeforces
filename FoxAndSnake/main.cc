#include <iostream>
#include <sstream>

using namespace std;

ostringstream oss;

void PrintChars(char c, int n) {
  for (size_t i = 0; i < n; i++) {
    oss << c;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  size_t n, m;
  cin >> n >> m;
  for (size_t i = 0; i < n; i++) {
    if (i % 2 == 0) {
      PrintChars('#', m);
      oss << endl;
    } else {
      if (((i - 1) >> 1) % 2 == 0) {
        PrintChars('.', m - 1);
        oss << "#";
      } else {
        oss << "#";
        PrintChars('.', m - 1);
      }
      oss << endl;
    }
  }
  cout << oss.str();
  return 0;
}
