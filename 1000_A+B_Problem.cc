#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  string a;
  string b;
  string c;
  string left;

  cin >> a;
  cin >> b;

  int add = 0;
  int pos = 0;
  for (; pos < b.length(); ++pos) {
    int num = a[a.length() - 1 - pos] - '0' + add + b[b.length() - 1 - pos] - '0';
    add = num >= 10;
    if (add == 1) num -= 10;
    c += '0' + num;
  }

  for (; pos < a.length(); ++pos) {
    int num = a[a.length() - 1 - pos] - '0' + add;
    int add = num >= 10;
    if (add == 1) num -= 10;
    c += '0' + num;
    if (add == 0) {
      left = a.substr(0, a.length() - 1 - pos);
      break;
    }
  }
  if (add == 1) c += '1';
  reverse(c.begin(), c.end());
  cout << left << c;
}
