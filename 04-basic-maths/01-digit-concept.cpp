#include <bits/stdc++.h>
using namespace std;

int revNum(int n) {
  int temp = 0;
  while (n > 0) {
    int last = n % 10;
    n /= 10;

    temp = temp * 10 + last;
  }

  return temp;
}

int main() {
  int n;
  cout << "Enter any large digit number (under int length): ";
  cin >> n;

  int ans = revNum(n);

  cout << ans << endl;
}
