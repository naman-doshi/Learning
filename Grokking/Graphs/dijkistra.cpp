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

string findLowestCost(map<string, int> costs, vs processed){
  int lowestCost = INF;
  string lowestCostNode = "";
  for (const auto& [key, value] : costs) {
    if (value < lowestCost && !invs(processed, key)) {
      lowestCost = value;
      lowestCostNode = key;
    }
  }
  return lowestCostNode;
}

int main() {

  map<string, map<string, int>> graph;
  // graph
  graph["start"]["a"] = 6;
  graph["start"]["b"] = 2;
  graph["a"]["fin"] = 1;
  graph["b"]["a"] = 3;
  graph["b"]["fin"] = 5;
  graph["fin"] = {};

  // costs
  msi costs;
  costs["a"] = 6;
  costs["b"] = 2;
  costs["fin"] = INF;

  // parents
  mss parents;
  parents["a"] = "start";
  parents["b"] = "start";
  parents["fin"] = "";

  // processed
  vs processed;

  // algorithm
  string node = findLowestCost(costs, processed);
  while (node != "") {
    int cost = costs[node];
    msi neighbors = graph[node];
    vs nKeys = keys(neighbors);
    rep(i, 0, sz(nKeys)) {
      string neighbor = nKeys[i];
      int newCost = cost + neighbors[neighbor];
      if (costs[neighbor] > newCost) {
        costs[neighbor] = newCost;
        parents[neighbor] = node;
      }
    }
    processed.push_back(node);
    node = findLowestCost(costs, processed);
  }

  // printing path of graph in order
  string path = "fin";
  string parent = parents[path];
  while (parent != "start") {
    path = parent + " -> " + path;
    parent = parents[parent];
  }
  path = "start -> " + path;
  cout << path << endl;

  // lowest cost
  cout << "lowest cost: " << costs["fin"] << endl;


  


  return 0;
}