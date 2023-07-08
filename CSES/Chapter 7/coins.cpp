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

const int INF = 2147483647;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define len(x) (int)(x).size()
#define count(arr, elem) count(arr.begin(), arr.end(), elem);

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vector<int>> vvi;
typedef map<string, int> msi;
typedef map<string, string> mss;

void printVector(vi arr) {
  rep(i, 0, len(arr)) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// assume you have 1, 3, and 4 dollar coins

int primitive(int x) {
  if (x < 0) return INF;
  if (x == 0) return 0;
  return min(primitive(x - 1), min(primitive(x - 3), primitive(x - 4))) + 1;
}

int memo(int x) {
  vb ready(100, false);
  vi value(100, 0);
  if (x < 0) return INF;
  if (x == 0) return 0;
  if (ready[x]) return value[x];
  value[x] = min(memo(x - 1), min(memo(x - 3), memo(x - 4))) + 1;
  ready[x] = true;
  return value[x];
}

int main() {
  int n;
  cin >> n;
  cout << memo(n) << endl;
  return 0;
}