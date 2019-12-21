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
const int INF = 1e9;]
const int MOD = 1e9+7;
const ll LINF = 1e18;
// clang-format on

ll price(ll A, ll B, ll N) { return A * N + B * to_string(N).length(); }

void solve(long long A, long long B, long long X) {
  ll ans = 0;
  if (A + B > X) {
    cout << 0 << endl;
    return;
  }
  if (A * 1e9 + B * 10 <= X) {
    cout << 1e9 << endl;
  }
  rep1(d, 9) {
    ll dn = (ll)(powl(10, d) - 1);
    if (A * dn + B * d < X) {
      continue;
    }
    rep(i, 9) {}
  }

  cout << ans << endl;
}

int main() {
  long long A;
  scanf("%lld", &A);
  long long B;
  scanf("%lld", &B);
  long long X;
  scanf("%lld", &X);
  solve(A, B, X);
  return 0;
}
