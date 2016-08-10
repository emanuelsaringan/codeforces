#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string line;
  getline(cin, line);
  vector<long long> nums;
  size_t start_idx = 0;
  for (size_t i = 0; i < line.size(); i++) {
    if ('+' == line[i]) {
      nums.push_back(stoll(string(line.begin() + start_idx, line.begin() + i)));
      start_idx = i + 1;
    }
  }
  nums.push_back(stoll(string(line.begin() + start_idx, line.end())));
  sort(nums.begin(), nums.end());
  bool first = true;
  ostringstream oss;
  for (const long long n : nums) {
    if (first) {
      first = false;
    } else {
      oss << "+";
    }
    oss << n;
  }
  cout << oss.str() << endl;
  return 0;
}
