// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
// clang-format on

ll fl(double x) { return floor(x); }

ll calc(ll y, ll m, ll d) {
  ll A = (365 * y), B = fl((double)y / 4), C = fl((double)y / 100), D = fl((double)y / 400),
     E = fl((double)306 * (m + 1) / 10);
  return A + B - C + D + E + d - 429;
}

void solve(long long y, long long m, long long d) {
  if (m <= 2) {
    y -= 1;
    m += 12;
  }
  ll elapsed = calc(y, m, d);
  ANS(calc(2014, 5, 17) - elapsed);
}

int main() {
  long long y;
  scanf("%lld", &y);
  long long m;
  scanf("%lld", &m);
  long long d;
  scanf("%lld", &d);
  solve(y, m, d);
  return 0;
}
