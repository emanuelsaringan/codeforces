#include <iostream>
#include <string>

using namespace std;

namespace {

char GetNext(char c) {
  return 'a' + (c - 'a' + 1) % 26;
}

}  // namespace

int main() {
  string word;
  cin >> word;
  for (int i = 1; i < word.size() - 1; i++) {
    if (word[i - 1] == word[i] && word[i] == word[i + 1]) {
      word[i] = GetNext(word[i]);
    }
  }
  for (int i = 0; i < word.size() - 1; i++) {
    if (word[i] == word[i + 1]) {
      word[i] = GetNext(word[i]);
      if (i != 0 && word[i - 1] == word[i]) {
        word[i] = GetNext(word[i]);
      }
    }
  }
  cout << word << endl;
  return 0;
}
