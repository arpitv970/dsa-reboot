#include <bits/stdc++.h>
using namespace std;

int main() {
  multiset<int> ms = {5, 3, 3, 1};
  for (auto &x : ms) {
    cout << x << " ";
  }
  cout << endl;

  cout << "---------" << endl;
  auto it = ms.find(3);

  if (it != ms.end()) {
    cout << *it << endl;
  } else {
    cout << "not found" << endl;
  }
  cout << "---------" << endl;

  ms.erase(3);

  for (auto &x : ms) {
    cout << x << " ";
  }
  cout << endl;
}
