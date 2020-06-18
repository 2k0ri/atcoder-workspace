// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using G = vector<vector<ll>>;
#define G(i, j) i, vector<ll>(j)
#define Gv(i, j, k) i, vector<ll>(j, k)
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
const long long MOD = 1000000007;
// clang-format on

void add(ll &a, const ll &b) {
  a += b;
  if (a >= MOD)
    a -= MOD;
}

void solve(long long H, long long W, std::vector<std::string> a) {
  G dp(G(H + 1, W + 1));
  dp[0][0] = 1;
  rep(i, H) rep(j, W) {
    if (i + 1 < H && a[i + 1][j] == '.')
      add(dp[i + 1][j], dp[i][j]);
    if (j + 1 < W && a[i][j + 1] == '.')
      add(dp[i][j + 1], dp[i][j]);
  }
  ANS(dp[H - 1][W - 1]);
}

// clang-format off
int main() {
  long long H;
  scanf("%lld",&H);
  long long W;
  scanf("%lld",&W);
  vector<string> a(H);
  for(int i = 0 ; i < H ; i++){
    std::cin >> a[i];
  }
  solve(H, W, std::move(a));
  return 0;
}
