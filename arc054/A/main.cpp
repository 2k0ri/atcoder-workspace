// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define SORT(x) sort(all(x))
#define SORT_DESC(x) sort(all(x), greater<>())
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl;
#define INF 1e9;
#define LINF 1e18;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long L, long long X, long long Y, long long S, long long D) {
  ll k = S <= D ? D - S : D + L - S;
  if (X < Y) {
    long double ans = (long double)k / (X + Y);
    long double ans2 = (long double)(L - k) / (Y - X);
    coutl << min(ans, ans2) << endl;
  } else {
    coutl << (long double)k / (X + Y) << endl;
  }
}

// clang-format off
int main() {
  long long L;
  scanf("%lld",&L);
  long long X;
  scanf("%lld",&X);
  long long Y;
  scanf("%lld",&Y);
  long long S;
  scanf("%lld",&S);
  long long D;
  scanf("%lld",&D);
  solve(L, X, Y, S, D);
  return 0;
}
