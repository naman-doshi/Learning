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
typedef map<string, int> msi;
typedef map<string, string> mss;

int linear(vi arr, int search) {
  rep(i, 0, len(arr)) {
    if (arr[i] == search) {
      return i;
    }
  }
}

int binaryMid(vi arr, int search) {
  int low = 0, high = len(arr) - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == search) {
      return mid;
    }
    if (arr[mid] > search) high = mid - 1;
    else low = mid + 1;
  }
}

// finding the first true in a list of bools
int firstTrue(vb arr) {
  int index = -1;
  for (int high = len(arr); high >= 1; high /= 2) {
    while (!arr[index + high]) index += high;
  }
  // smallest possible true value
  return index + 1;
}

// finding the maximum point of a parabolic vector
int findMax(vi arr) {
  int index = -1;
  for (int high = len(arr); high >= 1; high /= 2) {
    while (arr[index + high] < arr[index + high + 1]) index += high;
  }
  // smallest possible true value
  return index + 1;
}

int main() {
  vi arr = {-1, 2, 4, 6, 10, 8, 7, 5, 3, 1};
  cout << findMax(arr) << endl;
  return 0;
}