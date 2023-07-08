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

int biggestSumPath(vvi grid) {
  vvi sum(len(grid), vi(len(grid[0])));
  sum[0][0] = grid[0][0];
  sum[0][1] = grid[0][1];
  sum[1][0] = grid[1][0];

  rep(y, 1, len(grid)) {
    rep(x, 1, len(grid[0])) {
      sum[y][x] = max(sum[y][x - 1], sum[y - 1][x]) + grid[y][x];
    }
  }

  return sum[len(grid) - 1][len(grid[0]) - 1] + grid[0][0];
}


int main() {
  vvi grid = {
    {3, 7, 9, 2, 7},
    {9, 8, 3, 5, 5},
    {1, 7, 9, 8, 5},
    {3, 8, 6, 4, 10},
    {6, 3, 9, 7, 8}
  };

  cout << biggestSumPath(grid) << endl;
  return 0;

}