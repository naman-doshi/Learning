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
  vector<string> words;
  words.push_back("Simon");
  words.push_back("is");
  words.push_back("a");
  words.push_back("fish");

  cout << words[0] << endl;

  vi vec(5);

  // Getting the iterator itself
  auto first = words.begin();

  // Getting the value that the iterator points to
  cout << *first << endl;

  // You can add or subtract values to the iterator to make it move
  for (auto it = words.begin(); it != words.end(); it++) {
    string value = *it;
    cout << value << endl;
  }

  // NOTE:
  // The rbegin() and rend() iterators also exist
  // They are reverse iterators — rbegin is the last element and
  // rend is the first. Adding 1 to a reverse iterator makes it 
  // move backwards in the vector.

  for (auto it = words.rbegin(); it != words.rend(); it++) {
    string value = *it;
    cout << value << endl;
  }

  // insert and erase require iterators
  words.erase(words.begin() + 1);
  words.insert(words.end(), "food");

  trav(a, words) cout << a << endl;



}