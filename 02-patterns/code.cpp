#include <iostream>
using namespace std;

/**
 * The order is as per:
 * https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa
 */

void seperator(int n) {
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << "==";
  }
  cout << endl;
  cout << endl;
}

void pattern1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern2(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n - i; j <= n; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern3(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n - i; j <= n; j++) {
      cout << j + i + 1 - n;
    }
    cout << endl;
  }
}

void pattern4(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n - i; j <= n; j++) {
      cout << i + 1;
    }
    cout << endl;
  }
}

void pattern5(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern6(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      cout << j + 1;
    }
    cout << endl;
  }
}

void pattern7(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern8(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int j = i; j < 2 * n - i - 1; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

void pattern9(int n) {
  pattern7(n - 1);
  pattern8(n);
}

void pattern10(int n) {
  pattern2(n);
  pattern5(n - 1);
}

void pattern11(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n - i; j <= n; j++) {
      cout << (2 * i + j) % 2;
    }
    cout << endl;
  }
}

void pattern12(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n - i + 1; j <= n + 1; j++) {
      cout << j + i - n;
    }

    for (int j = i; j < 2 * n - i - 2; j++) {
      cout << " ";
    }

    for (int j = n; j >= n - i; j--) {
      cout << j - n + i + 1;
    }

    cout << endl;
  }
}

void pattern13(int n) {
  int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }
}

void pattern14(int n) {
  for (int i = 0; i < n; i++) {
    char s = 'A';
    for (int j = 0; j <= i; j++) {
      cout << s++;
    }
    cout << endl;
  }
}

void pattern15(int n) {
  for (int i = 0; i < n; i++) {
    char s = 'A';
    for (int j = i; j < n; j++) {
      cout << s++;
    }
    cout << endl;
  }
}

void pattern16(int n) {
  char s = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << s;
    }
    s++;
    cout << endl;
  }
}

void pattern17(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n - 1; j++) {
      cout << " ";
    }
    char s = 'A';
    for (int j = 0; j <= i; j++) {
      cout << s++;
    }

    for (int j = 0; j < i; j++) {
      cout << char(--s - 1);
    }
    cout << endl;
  }
}

void pattern18(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      char s = 'A' + n + j - i - 1;
      cout << s;
    }

    cout << endl;
  }
}

void pattern19(int n) {
  char star = '*';
  char gap = ' ';
  // top left stars
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << star;
    }

    for (int j = 0; j < i; j++) {
      cout << gap;
    }

    for (int j = 0; j < i; j++) {
      cout << gap;
    }

    for (int j = 0; j < n - i; j++) {
      cout << star;
    }

    cout << endl;
  }

  // bottom left stars
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << star;
    }

    for (int j = 0; j < n - i - 1; j++) {
      cout << gap;
    }

    for (int j = i; j < n - 1; j++) {
      cout << gap;
    }

    for (int j = 0; j <= i; j++) {
      cout << star;
    }

    cout << endl;
  }
}

void pattern20(int n) {
  char star = '*';
  char gap = ' ';

  // bottom left stars
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << star;
    }

    for (int j = 0; j < n - i - 1; j++) {
      cout << gap;
    }

    for (int j = i; j < n - 1; j++) {
      cout << gap;
    }

    for (int j = 0; j <= i; j++) {
      cout << star;
    }

    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << star;
    }

    for (int j = 0; j <= i; j++) {
      cout << gap;
    }

    for (int j = 0; j <= i; j++) {
      cout << gap;
    }

    for (int j = 0; j < n - i - 1; j++) {
      cout << star;
    }

    cout << endl;
  }
}
void pattern21(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
        cout << "*";
      }

      else {
        cout << " ";
      }
    }
    cout << endl;
  }
}

void pattern22(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << n - j;
    }

    for (int j = 0; j < n - i - 1; j++) {
      cout << n - i;
    }

    for (int j = 0; j < n - i - 1; j++) {
      cout << n - i;
    }

    for (int j = n - i + 1; j <= n; j++) {
      cout << j;
    }

    cout << endl;
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i; j < n - 1; j++) {
      cout << n - j + i;
    }

    for (int j = 0; j <= i; j++) {
      cout << i + 2;
    }

    for (int j = 0; j < i; j++) {
      cout << i + 2;
    }

    for (int j = 0; j < n - i - 1; j++) {
      cout << i + 2 + j;
    }

    cout << endl;
  }
}

int main() {
  int n;
  cout << "Enter the size of pattern: ";
  cin >> n;

  /*
  seperator(n);
  pattern1(n);

  seperator(n);
  pattern2(n);

  seperator(n);
  pattern3(n);

  seperator(n);
  pattern4(n);

  seperator(n);
  pattern5(n);

  seperator(n);
  pattern6(n);

  seperator(n);
  pattern7(n);

  seperator(n);
  pattern8(n);

  seperator(n);
  pattern9(n);

  seperator(n);
  pattern10(n);

  seperator(n);
  pattern11(n);

  seperator(n);
  pattern12(n);

  seperator(n);
  pattern13(n);

  pattern14(n);

  pattern15(n);

  pattern16(n);

  pattern17(n);

  pattern18(n);

  pattern19(n);

  pattern20(n);

  pattern21(n);
  */

  pattern22(n);
}
