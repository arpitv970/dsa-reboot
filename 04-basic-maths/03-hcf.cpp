#include <bits/stdc++.h>
using namespace std;

void printVectors(vector<int> v) {
  for (auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}

vector<int> printDivisiors(int n) {
  vector<int> ans;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      ans.push_back(i);
      if (n / i != i) {
        ans.push_back(n / i);
      }
    }
  }

  sort(ans.begin(), ans.end());

  return ans;
}

int getHcf(int n, int m) {
  vector<int> nf = printDivisiors(n);
  vector<int> mf = printDivisiors(m);

  int nH = nf.back();
  int mH = mf.back();

  map<int, int> mp;

  for (auto &x : nf) {
    mp[x]++;
  }
  for (auto &x : mf) {
    mp[x]++;
  }

  int hk = 0;
  for (auto &x : mp) {

    if (x.first > hk && x.second > 1) {
      hk = x.first;
    }
  }

  return hk;
}

int main() {
  int n, m;

  cout << "Enter 2 nums: ";
  cin >> n >> m;

  cout << "n: " << n << endl;
  vector<int> vn = printDivisiors(n);
  printVectors(vn);

  cout << endl;

  cout << "m: " << m << endl;
  vector<int> vm = printDivisiors(m);
  printVectors(vm);

  cout << endl;

  int hcf = getHcf(n, m);

  cout << "HCF: " << hcf << endl;

  return 0;
}
