#include <bits/stdc++.h>
using namespace std;

int main() {
  list<int> ls;

  ls.push_back(5);
  ls.push_back(4);
  ls.push_front(3);

  for (int x : ls) {
    cout << x << " ";
  }
  cout << endl;

  cout << "---------" << endl;

  list<int> l = {3, 2};

  l.push_back(5);
  l.push_front(1);

  auto it = l.begin();
  advance(it, 2);
  l.insert(it, 4);

  for (auto i : l) {
    cout << i << " ";
  }
  cout << endl;
}
