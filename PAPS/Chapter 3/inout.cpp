#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <unordered_map>
#include <vector>
#include <cmath>

using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {

  // DETECTING EOF
  int num;
  while (cin >> num) {
    // do something
  }


  // LINE BY LINE

  // if getting one word, then subsequent lines
  string word;
  cin >> word;
  string line;
  cin.ignore();
  getline(cin, line);

  // processing each line
  string hi;
  stringstream line(hi);
  while (line >> word) {
    // do something
  }

  // PRECISION
  cout << setprecision(10);
}