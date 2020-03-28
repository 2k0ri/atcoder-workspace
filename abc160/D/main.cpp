// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
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
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, long long X, long long Y) {
  vector<vector<int>> d(N, vector<int>(N, INF));
  vector<ll> a(N);
  rep(i, N) {
    d[i][i] = 0;
    if (i < N - 1) {
      d[i][i + 1] = 1;
      // d[i + 1][i] = 1;
    }
  }
  d[X - 1][Y - 1] = 1;
  // d[Y - 1][X - 1] = 1;
  rep(k, N) rep(i, N) for (int j = i + 1; j < N; ++j) {
    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    d[j][i] = d[i][j];
  }
  rep(i, N) for (int j = i + 1; j < N; ++j) {
    ++a[d[i][j]];
  }
  for (int i = 1; i < N; ++i)
    ANS(a[i]);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long X;
  scanf("%lld",&X);
  long long Y;
  scanf("%lld",&Y);
  solve(N, X, Y);
  return 0;
}
