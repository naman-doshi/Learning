#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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

using namespace std;

int GCD(int a, int b) {
  int ma = 0;
  for (int i = 1; i < max(a, b) + 1; i++) {
    if (a % i == 0 && b % i == 0) {
      ma = i;
    }
  }
  return ma;
}

int isPrime(int a) {
  for (int i = 2; i < a; i++) {
    if (a % i == 0) return 0;
  }
  return 1;
}

int main() {
  cout << isPrime(7);
}