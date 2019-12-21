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

ll counter(ll x) {
  if (x == 0)
    return 0;
  return counter(x >> 1) + (x & 1);
}

void solve(ll N, vector<ll> A, vector<vector<ll>> X, vector<vector<ll>> Y) {
  ll ans = 0;
  for (ll bits = 1; bits < (1 << N); bits++) {
    bool ok = true;
    rep(i, N) {
      if (!(bits & (1 << i)))
        continue;
      rep(j, A[i]) {
        if (((bits >> (X[i][j] - 1)) & 1) ^ Y[i][j])
          ok = false;
      }
    }
    if (ok)
      ans = max(ans, counter(bits));
  }
  cout << ans << endl;
}

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<ll> A(N);
  vector<vector<ll>> X(N);
  vector<vector<ll>> Y(N);
  rep(n, N) {
    scanf("%lld", &A[n]);
    vector<ll> x(A[n]);
    vector<ll> y(A[n]);
    rep(a, A[n]) { scanf("%lld %lld", &x[a], &y[a]); }
    X[n] = x;
    Y[n] = y;
  }
  solve(N, move(A), move(X), move(Y));
  return 0;
}
