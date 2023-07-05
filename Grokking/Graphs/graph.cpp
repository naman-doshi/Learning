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
typedef vector<string> vs;

bool in(vi arr, int elem) {
  return find(arr.begin(), arr.end(), elem) != arr.end();
}

bool is_seller(string name) {
  return name[name.size() - 1] == 'm';
}

int main() {

  // initialiing graph
  map<string, vs> graph;
  graph["you"] = {"alice", "bob", "claire"};
  graph["bob"] = {"anuj", "peggy"};
  graph["alice"] = {"peggy"};
  graph["claire"] = {"thom", "jonny"};
  graph["anuj"] = {};
  graph["peggy"] = {};
  graph["thom"] = {};
  graph["jonny"] = {};

  // BFS
  queue<string> q;
  q.push("you");
  set<string> searched;

  while (!q.empty()) {
    string person = q.front();
    q.pop();
    if (searched.find(person) == searched.end()) {
      if (is_seller(person)) {
        cout << person << " is a mango seller!" << endl;
        return 0;
      } else {
        trav(friend_, graph[person]) {
          q.push(friend_);
        }
        searched.insert(person);
      }
    }
  }
  return 0;
}