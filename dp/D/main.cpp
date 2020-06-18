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

void solve(long long N, long long W, std::vector<long long> w, std::vector<long long> v) {
  vector<vector<ll>> dp(N + 1, vector<ll>(W + 1));
  rep(i, N) rep(sum_w, W + 1) {
    if (sum_w - w[i] >= 0) {
      chmax(dp[i + 1][sum_w], dp[i][sum_w - w[i]] + v[i]);
    }
    chmax(dp[i + 1][sum_w], dp[i][sum_w]);
  }
  ANS(dp[N][W]);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long W;
  scanf("%lld",&W);
  std::vector<long long> w(N);
  std::vector<long long> v(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&w[i]);
    scanf("%lld",&v[i]);
  }
  solve(N, W, std::move(w), std::move(v));
  return 0;
}
