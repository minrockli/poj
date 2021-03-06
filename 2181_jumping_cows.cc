/*
  Jumping Cows
Time Limit: 1000MS    Memory Limit: 65536K
Total Submissions: 6017   Accepted: 3661
Description

Farmer John's cows would like to jump over the moon, just like the cows in their favorite nursery rhyme. Unfortunately, cows can not jump.

The local witch doctor has mixed up P (1 <= P <= 150,000) potions to aid the cows in their quest to jump. These potions must be administered exactly in the order they were created, though some may be skipped.

Each potion has a 'strength' (1 <= strength <= 500) that enhances the cows' jumping ability. Taking a potion during an odd time step increases the cows' jump; taking a potion during an even time step decreases the jump. Before taking any potions the cows' jumping ability is, of course, 0.

No potion can be taken twice, and once the cow has begun taking potions, one potion must be taken during each time step, starting at time 1. One or more potions may be skipped in each turn.

Determine which potions to take to get the highest jump.
Input

* Line 1: A single integer, P

* Lines 2..P+1: Each line contains a single integer that is the strength of a potion. Line 2 gives the strength of the first potion; line 3 gives the strength of the second potion; and so on.
Output

* Line 1: A single integer that is the maximum possible jump.
Sample Input
8
7
2
1
8
4
3
5
6
Sample Output

17
Source
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> input;
  int N;

  cin >> N;
  for (int i = 0; i < N; ++i) {
    int tmp;
    cin >> tmp;
    input.push_back(tmp);
  }

  int pos = 0;
  int neg = 0;

  for (int i = N - 1; i >= 0; --i) {
    int num1 = input[i] + neg;
    int num2 = pos - input[i];
    pos = num1 > pos ? num1 : pos;
    neg = num2 > neg ? num2 : neg;
    //    cout << pos << " " << neg << endl;
  }
  cout << pos << endl;
}
