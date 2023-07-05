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

using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

int main() {
  
  queue<int> q;

  // Operations:
  // push(x) — add to back of queue
  // pop() — delete first elem
  // front() — return first elem
  // empty() — check if queue empty
  // size() — return num of elems in queue

  stack<int> q;

  // Operations:
  // push(x) — add to top of stack
  // pop() — delete top elem
  // top() — return top elem
  // empty() — check if stack empty
  // size() — return num of elems in stack

  bool cmp(int a, int b) {
    return a > b;
  }

  priority_queue<int, vector<int>, cmp> pq;

  // instead of operationg being done on first/last elem,
  // they are performed on the largest element

}