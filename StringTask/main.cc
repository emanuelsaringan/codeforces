#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

namespace {

static const string kVowels = "aeiouyAEIOUY";

bool IsConsonant(char c) {
  return kVowels.find(c) == string::npos;
}

}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string str;
  cin >> str;
  // Remove vowels.
  str.erase(remove_if(
    str.begin(),
    str.end(),
    [](char x) { return !IsConsonant(x); }), str.end());
  // Insert '.' before each consonant.
  for (int i = 0; i < str.size(); i++) {
    if (IsConsonant(str[i])) {
      str.insert(i, ".");
      i++;
    }
  }
  // Replace all uppercase consonants with lowercase.
  for (int i = 0; i < str.size(); i++) {
    if (isupper(str[i]) && IsConsonant(str[i])) {
      str[i] = tolower(str[i]);
    }
  }
  cout << str << endl;
  return 0;
}
