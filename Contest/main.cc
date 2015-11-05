#include <iostream>

using namespace std;

long GetScore(int p, int t) {
  return max((p / 10) * 3, p - (p / 250) * t);
}

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >>d;
  long misha = GetScore(a, c);
  long vasya = GetScore(b, d);
  if (misha > vasya) {
    cout << "Misha";
  } else if (misha < vasya) {
    cout << "Vasya";
  } else {
    cout << "Tie";
  }
  cout << endl;
  return 0;
}
