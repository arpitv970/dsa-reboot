#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v1;

  vector<int> v2(3, 5);

  for (int x : v2) {
    cout << x << " ";
  }
  cout << endl;

  vector<int> v3 = {1, 2, 3};

  for (int x : v3) {
    cout << x << " ";
  }
  cout << endl;

  cout << "---------" << endl;
  vector<char> v4 = {'a', 'b', 'd'};
  v4.push_back('e');
  v4.insert(v4.begin() + 2, 'c');

  for (char x : v4) {
    cout << x << " ";
  }
  cout << endl;
  cout << v4.size() << endl;

  v4.pop_back();

  v4.erase(find(v4.begin(), v4.end(), 'c'));

  for (char x : v4) {
    cout << x << " ";
  }
  cout << endl;
  cout << v4.size() << endl;

  if (v4.empty()) {
    cout << "its empty" << endl;
  } else {
    cout << "it has data" << endl;
  }
  cout << "---------" << endl;

  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (const auto &row : matrix) {
    for (const auto &val : row) {
      cout << val << " ";
    }
    cout << endl;
  }
}
