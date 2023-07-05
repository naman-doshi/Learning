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
#define sz(x) (int)(x).size()
#define count(arr, elem) count(arr.begin(), arr.end(), elem);

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<string, int> msi;
typedef map<string, string> mss;

bool invi(vi arr, int elem) {
  return find(arr.begin(), arr.end(), elem) != arr.end();
}

bool invs(vs arr, string elem) {
  return find(arr.begin(), arr.end(), elem) != arr.end();
}

vs keys(const map<string, int>& my_map) {
  vector<string> keys;
  for (const auto& [key, value] : my_map) {
    keys.push_back(key);
  }
  return keys;
}

int naive(vi arr) {
  int best = 0;
  rep(a, 0, sz(arr)) {
    rep(b, a, sz(arr)) {
      int sum = 0;
      rep(k, a, b+1) {
        sum += arr[k];
      }
      best = max(best, sum);
    }
  }
  return best;
}

int better(vi arr) {
  int best = 0;
  rep(a, 0, sz(arr)) {
    int sum = 0;
    rep(b, a, sz(arr)) {
      sum += arr[b];
      best = max(best, sum);
    }
  }
  return best;
}

int dp(vi arr) {
  int best = 0, sum = 0;
  rep(k, 0, sz(arr)) {
    sum = max(arr[k], sum + arr[k]);
    best = max(best, sum);
  }
  return best;
}


int main() {
  vi arr = {-1, 2, 4, -3, 5, 2, -5, 2};
  cout << dp(arr) << endl;

}