#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// clang-format off
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define coutl cout<<fixed<<setprecision(10)
// clang-format on

void solve(long long a, long long b, long long x) {
  long double S = (long double)x / a;
  long double rad;
  if (S >= (long double)a * b / 2) {
    long double h = ((long double)a * b - S) * 2 / a;
    rad = atan2(h, a);
  } else {
    long double w = S * 2 / b;
    rad = atan2(b, w);
  }
  long double deg = rad / 2 / acos(-1) * 360;
  coutl << deg << endl;
}

int main() {
  long long a;
  scanf("%lld", &a);
  long long b;
  scanf("%lld", &b);
  long long x;
  scanf("%lld", &x);
  solve(a, b, x);
  return 0;
}
