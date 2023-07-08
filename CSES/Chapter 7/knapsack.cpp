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

void printVector(vb arr) {
  rep(i, 0, len(arr)) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

bool invi(vi arr, int elem) {
  return find(arr.begin(), arr.end(), elem) != arr.end();
}

int sum(vi arr) {
  return accumulate(arr.begin(), arr.end(), 0);
}

bool possible(vi weights, int x) {
  // assumes weights is sorted
  vb poss(sum(weights) + 1, false);
  poss[weights[0]] = true;
  rep(i, 1, len(weights)) {
    vb temp(sum(weights) + 1, false);
    temp[weights[i]] = true;
    rep(j, 0, len(poss)) {
      if (poss[j]) {
        temp[j + weights[i]] = true;
      }
    }
    rep(j, 0, len(temp)) {
      if (temp[j] || poss[j]) {
        poss[j] = true;
      }
    }
  }

  return poss[x];
  
}

int main() {
  vi weights = {1, 3, 3, 5};
  cout << possible(weights, 10) << endl;
  return 0;
}