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

int main() {
  set<int> s;

  s.insert(4);
  s.insert(7);
  s.insert(1);

  // find returns an iterator to the element if it exists
  auto it = s.find(4);
  // move to next largest element;
  ++it;
  cout << *it << endl;

  // if nonexistent, find returns the end()
  if (s.find(7) == s.end()) {
    cout << "not in set" << endl;
  }

  // erase removes the specific element
  s.erase(7);

  // if nonexistent, find returns the end()
  if (s.find(7) == s.end()) {
    cout << "not in set" << endl;
  }

  cout << "smallest element: " << *s.begin() << endl;

  map<string, int> age;

  age["Johan"] = 22;
  age["Simon"] = 23;

  if (age.find("Aron") == age.end()) {
    cout << "Aron does not exist" << endl;
  }

  cout << age["Johan"] << endl;
  cout << age["Anton"] << endl;

  age.erase("Johan");
  cout << age["Johan"] << endl;

  auto last = --age.end();
  cout << (*last).first << (*last).second << endl;

  return 0;
}