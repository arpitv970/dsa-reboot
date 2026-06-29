#include <bits/stdc++.h>
using namespace std;

void printVectors(vector<int> v) {
  for (auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}

vector<int> revArr(vector<int> &v, int i) {
  int n = v.size();

  vector<int> ans;
  if (i == n) {
    return ans;
  }

  int first = v[i++];

  ans = revArr(v, i);

  ans.push_back(first);

  return ans;
}

vector<int> revArrP(vector<int> &v) {
  int n = v.size();
  vector<int> ans;
  if (n == 0) {
    return ans;
  }

  int first = *v.begin();

  v.erase(v.begin());
  ans = revArrP(v);

  ans.push_back(first);

  return ans;
}

int main() {
  vector<int> v = {1, 2, 3, 4, 5};

  printVectors(v);

  cout << endl;

  vector<int> ans = revArrP(v);

  printVectors(ans);
}
