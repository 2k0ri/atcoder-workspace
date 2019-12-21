// clang-format off
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
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
// clang-format on

void solve(long long X) {
  ll minnum = X / 100;
  // ll maxnum = X / 105;
  ll minmod = X % 100;
  // ll maxmod = X % 105;

  cout << ((long double)minmod / minnum <= 5.0 ? 1 : 0) << endl;
  return;
}

int main() {
  long long X;
  scanf("%lld", &X);
  solve(X);
  return 0;
}
