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

typedef long long ll;

#define rep(i, a, b) for (int i = a; i < b; i++)

void change(int &val) {
  val = 0;
}

struct Point {
  double x;
  double y;

  Point(double theX, double theY) {
    x = theX;
    y = theY;
  }

  Point mirror() const {
    return Point(x, -y);
  }

  Point translate() {
    return Point(2*x, 2*y);
  }
};

struct Quotient {
  int nominator;
  int denominator;

  Quotient(int n, int d) {
    nominator = n;
    denominator = d;
  }

  Quotient add(const Quotient &other) const {
    return Quotient(nominator + other.nominator, denominator + other.denominator);
  }

  Quotient multiply(const Quotient &other) const {
    return Quotient(nominator * other.nominator, denominator * other.denominator);
  }

  void print() const {
    cout << nominator << '/' << denominator;
  }
};

int main() {
  int n = 9;
  cout << n++ << endl;
  cout << n << endl;

  n = 9;
  cout << ++n << endl;
  cout << n << endl;

  for (int i = 9; i > 0; i--) cout << i << endl;

  change(n);
  cout << n << endl;

  Point p(4, 2.1);
  cout << p.x << " " << p.y << endl;

  rep(i, 0, 5) cout << i << endl;

  return 0;
}