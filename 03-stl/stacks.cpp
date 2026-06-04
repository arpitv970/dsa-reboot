#include <bits/stdc++.h>
using namespace std;

int main() {
  stack<int> st;

  st.push(1);
  st.push(2);

  cout << "Top: " << st.top() << endl;

  st.pop();
  cout << "Top: " << st.top() << endl;

  stack<int> st1;
  st1.push(1);
  st1.push(2);
  st1.push(3);
  st1.push(4);

  stack<int> temp(st1);

  while (!temp.empty()) {
    cout << temp.top() << " ";
    temp.pop();
  }
  cout << endl;
}
