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

bool cmp(int a, int b) {
  return abs(a) < abs(b);
}

int main() {
  
  // SORTING
  vi v(10);
  sort(v.begin(), v.end());
  sort(v.begin(), v.end(), greater<int>());

  // if you want to maintain order when both
  // elements are equal, use stable_sort

  // to check sort, use is_sorted (same args)
  sort(v.begin(), v.end(), cmp);

  // SEARCHING
  auto found = find(v.begin(), v.end(), 5);
  auto counts = count(v.begin(), v.end(), 5);

  // returns a bool rather than location
  auto bin = binary_search(v.begin(), v.end(), 5);

  auto low = lower_bound(v.begin(), v.end(), 5);
  auto high = upper_bound(v.begin(), v.end(), 5);

  // PERMUTATIONS
  sort(v.begin(), v.end());
  do {
    // something
  } while (next_permutation(v.begin(), v.end()));

  return 0;

}