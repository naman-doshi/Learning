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

  string st = "boo";
  st.push_back('p');
  cout << st << endl;

  // CONVERSIONS
  // stringstream ss;
  // ss << 5;
  // string val;
  // ss >> val; // val is now the string 5

  // stringstream ss;
  // ss << "5";
  // int val;
  // ss >> val; // val is now the int 5

  stringstream ss;
  ss << "notaninteger";
  int val;
  if (ss >> val) {
    cout << "int!" << endl;
  } else {
    cout << "not int!" << endl;
  }


}