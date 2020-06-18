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

void solve(long long N, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c) {
  vector<vector<ll>> dp(N + 1, vector<ll>(3));
  vector<vector<ll>> A(3);
  A[0] = a;
  A[1] = b;
  A[2] = c;
  rep(i, N) rep(j, 3) rep(k, 3) {
    if (j == k)
      continue;
    chmax(dp[i + 1][k], dp[i][j] + A[k][i]);
  }
  ll ans = 0;
  rep(j, 3) chmax(ans, dp[N][j]);
  ANS(ans);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<long long> a(N);
  std::vector<long long> b(N);
  std::vector<long long> c(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&a[i]);
    scanf("%lld",&b[i]);
    scanf("%lld",&c[i]);
  }
  solve(N, std::move(a), std::move(b), std::move(c));
  return 0;
}
