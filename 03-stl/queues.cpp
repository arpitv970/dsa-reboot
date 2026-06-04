#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> q;
  q.push(1);
  q.push(2);

  cout << "front: " << q.front() << endl;
  cout << "back: " << q.back() << endl;

  q.pop();
  cout << "front: " << q.front() << endl;

  cout << "---------" << endl;

  queue<int> q1;
  q1.push(1);
  q1.push(2);
  q1.push(3);
  q1.push(4);

  queue<int> temp(q1);

  while (!temp.empty()) {
    cout << temp.front() << " ";
    temp.pop();
  }
  cout << endl;
}
