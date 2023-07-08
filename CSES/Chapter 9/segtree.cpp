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

// always better than a BIT, except it takes more memory
int summ(vi& tree, int a, int b) {
  a += len(tree), b += len(tree);
  int s = 0;
  while (a <= b) {
    if (a%2 == 1) s += tree[a++];
    if (b%2 == 0) s += tree[b--];
    a /= 2, b /= 2;
  }
  return s;
}

void add(vi& tree, int k, int x) {
  k += len(tree);
  tree[k] += x;
  for (k /= 2;  k >= 1; k /= 2) {
    tree[k] = tree[2*k] + tree[2*k+1];
  }
}

void minim(vi& tree, int k, int x) {
  k += len(tree);
  tree[k] = x;
  for (k /= 2; k >= 1; k /= 2) {
    tree[k] = min(tree[2*k], tree[2*k+1]);
  }
}

void maxim(vi& tree, int k, int x) {
  k += len(tree);
  tree[k] = x;
  for (k /= 2; k >= 1; k /= 2) {
    tree[k] = max(tree[2*k], tree[2*k+1]);
  }
}

int gcd(int a, int b){
    if (b == 0)
       return a;
    return gcd(b, a % b); 
}

void GCD(vi& tree, int k, int x) {
  k += len(tree);
  tree[k] = x;
  for (k /= 2; k >= 1; k /= 2) {
    tree[k] = gcd(tree[2*k], tree[2*k+1]);
  }
}

int main() {
  vi arr = {5, 8, 6, 3, 2, 7, 2, 6};
  // constructing the tree
  vi tree(len(arr), 0);
  rep(i, 0, len(arr)) {
    add(tree, i, arr[i]);
  }
  trav(x, arr) tree.push_back(x);
  printVector(tree);

}