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

int reverse(int x) {
  int rev = 0;
  while (x != 0) {
    int last = x % 10;
    if (rev < INT_MIN / 10 || rev > INT_MAX / 10) {
      return 0;
    }

    rev = rev * 10 + last;
    x /= 10;
  }

  return rev;
}

int armstrongNum(int x) {
  int ans = 0;

  while (x != 0) {
    int last = x % 10;

    if (ans < INT_MIN / 10 || ans > INT_MAX / 10) {
      return 0;
    }

    ans = ans + (last * last * last);
    x /= 10;
  }

  return ans;
}

int main() {
  int n;
  cout << "Enter any large digit number (under int length): ";
  cin >> n;

  int ans = reverse(n);
  cout << ans << endl;

  int armNum = armstrongNum(n);

  cout << "arm: " << armNum << endl;
  if (armNum == n) {
    cout << "this is the guy!!" << endl;
  } else {
    cout << "na i'd win" << endl;
  }
}
