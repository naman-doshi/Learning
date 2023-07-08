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
#define invi(arr, elem) find(arr.begin(), arr.end(), elem) != arr.end();
#define sum(arr) accumulate(arr.begin(), arr.end(), 0);

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

vi twoSum(vi arr, int target) {
  sort(arr.begin(), arr.end());
  int i = 0, j = len(arr) - 1;
  while (i < j) {
    int sum = arr[i] + arr[j];
    if (sum == target) {
      return {arr[i], arr[j]};
    } else if (sum < target) {
      i++;
    } else {
      j--;
    }
  }
  return {};
}

int main() {
  vi arr = {3,2,4};
  int target = 6;
  vi res = twoSum(arr, target);
  printVector(res);
  return 0;
}