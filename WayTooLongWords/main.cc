#include <iostream>
#include <sstream>
#include <string>

using namespace std;

namespace {

string shorten(const string& word) {
  if (word.size() <= 10) {
    return word;
  }
  stringstream ss;
  ss << word.at(0) << word.size() - 2 << word.at(word.size() - 1);
  return ss.str();
}

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  string word;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> word;
    cout << shorten(word) << endl;
  }
  return 0;
}
