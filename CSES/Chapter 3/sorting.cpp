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

vi bubble(vi arr) {
  int n = arr.size();
  rep(i, 0, n) {
    rep(j, 0, n - i - 1) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  return arr;
}

vi merge(vi arr) {
  int n = arr.size();
  if (n == 1) {
    return arr;
  }
  vi left(arr.begin(), arr.begin() + n / 2);
  vi right(arr.begin() + n / 2, arr.end());
  left = merge(left);
  right = merge(right);
  vi res;
  int i = 0, j = 0;
  while (i < left.size() && j < right.size()) {
    if (left[i] < right[j]) {
      res.push_back(left[i]);
      i++;
    } else {
      res.push_back(right[j]);
      j++;
    }
  }
  while (i < left.size()) {
    res.push_back(left[i]);
    i++;
  }
  while (j < right.size()) {
    res.push_back(right[j]);
    j++;
  }
  return res;
}

int main() {
  vi arr = {1, 3, 8, 2, 9, 2, 5, 6};
  return 0;
}