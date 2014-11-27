#include <iostream>
#include <list>
#include <cmath>

using namespace std;

int main() {
  size_t n;
  cin >> n;

  list<int> one;
  list<int> two;
  list<int> three;

  size_t cur_skill;
  for (size_t i = 0; i < n; i++) {
    cin >> cur_skill;

    switch (cur_skill) {
    case 1:
      one.push_back(i + 1);
      break;
    case 2:
      two.push_back(i + 1);
      break;
    default:
      three.push_back(i + 1);
      break;
    }
  }

  size_t min_count = min(one.size(), min(two.size(), three.size()));
  cout << min_count << endl;
  while (min_count--) {
    cout << one.front() << " " << two.front() << " " << three.front() << endl;
    one.pop_front();
    two.pop_front();
    three.pop_front();
  }

  return 0;
}
