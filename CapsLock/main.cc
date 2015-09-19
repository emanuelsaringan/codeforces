#include <cctype>
#include <iostream>
#include <string>

using namespace std;

namespace {

bool IsUpperCase(const string& word) {
  bool is_upper = true;
  for (int i = 1; i < word.size(); i++) {
    if (islower(word[i])) {
      is_upper = false;
      break;
    }
  }
  return is_upper;
}

void Transform(string* word) {
  string& w = *word;
  for (int i = 0; i < word->size(); i++) {
    w[i] = isupper(w[i]) ? tolower(w[i]) : toupper(w[i]);
  }
}

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;
  while (cin >> word) {
    if (IsUpperCase(word)) {
      Transform(&word);
    }
    cout << word << endl;
  }
  return 0;
}
