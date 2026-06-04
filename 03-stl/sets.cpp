#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> s = {4, 2, 3, 2, 1};
  for (auto &x : s) {
    cout << x << " ";
  }
  cout << endl;

  auto it = s.find(1);

  if (it != s.end()) {
    cout << "found: " << *it << endl;
  }

  if (s.count(2)) {
    cout << "yep its here!!" << endl;
  }

  for (auto it = s.begin(); it != s.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
}
