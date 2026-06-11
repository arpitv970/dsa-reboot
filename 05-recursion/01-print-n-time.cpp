#include <bits/stdc++.h>
using namespace std;

void seperator(int n) {
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << "==";
  }
  cout << endl;
  cout << endl;
}

void printN1(int n) {
  if (n == 0) {
    return;
  }
  cout << n-- << endl;
  printN1(n);
}

void print1N(int n) {
  if (n == 0) {
    return;
  }
  print1N(--n);
  cout << n + 1 << endl;
}

int sumN(int n) {
  int sum = 0;
  if (n == 0) {
    return sum;
  }

  int ans = sumN(--n);
  return ans + n + 1;
}

int factorial(int n) {
  int i = 1;

  if (n == 0) {
    return i;
  }

  int ans = factorial(--n);

  return ans * (n + 1);
}

int main() {
  int n;
  cout << "Enter the loop count: ";
  cin >> n;

  print1N(n);
  seperator(5);
  printN1(n);

  seperator(5);
  cout << sumN(n) << endl;
  seperator(5);
  cout << factorial(n) << endl;
}
