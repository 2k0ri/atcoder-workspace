#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// clang-format off
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// clang-format on

void solve(long long a, long long b, long long x) {
  long double h = (long double)x / (a * a);
  long double theta_rad = atan(((long double)b - h) / a);
  long double theta_deg = (theta_rad / M_PI) * 180;
  cout << theta_deg << endl;
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
