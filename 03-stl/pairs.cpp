#include <bits/stdc++.h>
using namespace std;

int main() {
  pair<int, int> p1 = {1, 2};
  pair<int, string> p2 = {1, "Arpit"};
  pair<int, pair<int, int>> p3 = {1, {2, 3}};

  pair<int, int> p4 = {3, 5};
  pair<int, int> p5 = {3, 7};
  pair<int, int> p6 = {2, 5};

  cout << p1.first << ", " << p1.second << endl;
  cout << p2.first << ", " << p2.second << endl;
  cout << p3.first << ", " << p3.second.first << ", " << p3.second.second
       << endl;

  cout << "---------" << endl;
  /**
   * Structured bindings C++ 17
   * splits a pair into two separate variables in same step, instead of using
   * .first and .second
   */

  auto [number, text] = p2;
  cout << "Number: " << number << "\n";
  cout << "Text: " << text << "\n";

  cout << "---------" << endl;
  // comparison among pairs
  cout << "p4 == p5: " << (p4 == p5) << endl;
  cout << "p4 != p6: " << (p4 != p6) << endl;
  cout << "p4 > p6: " << (p4 > p6) << endl;
  cout << "p4 < p5: " << (p4 < p5) << endl;
  cout << "p4 >= p6: " << (p4 >= p6) << endl;
  cout << "p6 <= p4: " << (p6 <= p4) << endl;
}
