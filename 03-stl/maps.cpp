#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, string> m = {{1, "arpit"}, {2, "verma"}};
  for (auto &x : m) {
    cout << x.first << " " << x.second << endl;
  }
}
