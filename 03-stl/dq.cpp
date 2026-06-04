#include <bits/stdc++.h>
using namespace std;

int main() {
  deque<int> d = {1, 2, 3, 4};
  d.push_back(5);
  d.push_front(0);

  for (int x : d) {
    cout << x << " ";
  }
  cout << endl;

  cout << "---------" << endl;

  d.pop_back();
  d.pop_front();
  for (int x : d) {
    cout << x << " ";
  }
  cout << endl;
}
