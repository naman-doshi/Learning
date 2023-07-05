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
#define count(arr, elem) count(arr.begin(), arr.end(), elem);

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

bool in(vi arr, int elem) {
  return find(arr.begin(), arr.end(), elem) != arr.end();
}

int main() {
  int n, r, s;
  cin >> n >> s >> r;
  vi ppl, rs, ss;
  int z;

  rep(i, 0, s) {
    cin >> z;
    ss.push_back(z);
  }

  rep(i, 0, r) {
    cin >> z;
    rs.push_back(z);
  }


  rep(i, 0, n) {
    if (in(rs, i) && !in(ss, i)) ppl.push_back(1);
    else if (in(ss, i) && !in(rs, i)) ppl.push_back(-1);
    else ppl.push_back(0);
  }

  rep(i, 0, n) {
    if (ppl[i-1] == -1 && ppl[i] == 1) {
      ppl[i-1] = 0;
      ppl[i] = 0;
    } else if (ppl[i+1] == -1 && ppl[i] == 1) {
      ppl[i+1] = 0;
      ppl[i] = 0;
    }
  }

  cout << count(ppl, -1);
}