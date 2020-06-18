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
#define SORT_DESC(x) sort((x).rbegin(),(x).rend())
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl
#define END(ans) ANS(ans); return
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

vector<vector<ll>> G;
ll dp[100100];

ll rec(ll v) {
  if (dp[v] != -1)
    return dp[v];
  ll ans = 0;
  for (ll nv : G[v]) {
    chmax(ans, rec(nv) + 1);
  }
  return dp[v] = ans;
}

void solve(long long N, long long M, std::vector<long long> x, std::vector<long long> y) {
  G.assign(N, vector<ll>());
  rep(i, M) {
    G[x[i] - 1].pb(y[i] - 1);
  }
  rep(i, N) dp[i] = -1;

  ll ans = 0;
  rep(i, N) chmax(ans, rec(i));
  ANS(ans);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long M;
  scanf("%lld",&M);
  std::vector<long long> x(M);
  std::vector<long long> y(M);
  for(int i = 0 ; i < M ; i++){
    scanf("%lld",&x[i]);
    scanf("%lld",&y[i]);
  }
  solve(N, M, std::move(x), std::move(y));
  return 0;
}
