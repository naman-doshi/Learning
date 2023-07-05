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

struct DynamicArray {

  int capacity;
  int size;
  //int* backing;

  DynamicArray() {
    capacity = 10;
    size = 0;
    int* backing = new int[10];
  }

  void ensureCapacity(int need) {
    while (capacity < need) {
      int* newBacking = new int[2 * capacity];
      rep(i, 0, size) newBacking[i] = backing[i];
      delete backing;
      backing = newBacking;
      capacity *= 2;
    }
  }

  void insert(int pos, int elem) {
    for (int i = size; i > pos; i--) {
      backing[i+1] = backing[i];
    }
    backing[pos] = elem;
  }

  void remove(int pos) {
    rep(i, pos, size) backing[i] = backing[i+1];
  }

};


int main() {
  int size = 10;
  int arr[size];
  arr[2] = 5;
  cout << arr[2] << endl;

  // Dynamic arrays can change size when needed
  // We also want them to support inserting and removing
  

}