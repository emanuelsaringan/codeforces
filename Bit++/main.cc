#include <iostream>
#include <string>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, total = 0;
  string command;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> command;
    if (command.find("+") != string::npos) {
      total++;
    } else {
      total--;
    }
  }
  cout << total << endl;
  return 0;
}
