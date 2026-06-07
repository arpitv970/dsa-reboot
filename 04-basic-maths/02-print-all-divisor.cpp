#include <bits/stdc++.h>
using namespace std;

void printDivisiors(int n) {
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

  for (auto &x : ans) {
    cout << x << " ";
  }
  cout << endl;
}

bool isPrime(int n) {

  vector<int> ans;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      ans.push_back(i);
      if (n / i != i) {
        ans.push_back(n / i);
      }
    }
  }

  if (ans.size() > 2) {
    return false;
  }

  return true;
}

int main() {
  int n;
  cout << "Enter any large digit number (under int length): ";
  cin >> n;

  printDivisiors(n);

  if (isPrime(n) == true) {
    cout << "its prime" << endl;
  } else {
    cout << "not a prime" << endl;
  }

  return 0;
}
