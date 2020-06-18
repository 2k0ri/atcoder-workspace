// clang-format off
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
template<class T> inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, long long L, std::vector<long long> x, std::vector<long long> T) {
  ll t0_half = (T[0] + T[1]) / 2;
  // ll h = x.size();
  // ll p = L - h;
  // if (T[2] <= T[1]) {
  //   ANS(T[0] * p + T[2] * h);
  //   return;
  // }
  vector<ll> dp(L + 1, INF);
  dp[0] = 0;
  for (ll h : x) {
    rep(i, h) {
      chmin(dp[i + 1], dp[i] + T[0]);
      chmin(dp[i + 2], dp[i] + T[0] + T[1]);
      chmin(dp[i + 4], dp[i] + T[0] + (3 * T[1]));
    }
    chmin(dp[h], dp[h - 1] + T[3]);
    chmin(dp[h + 2], dp[h - 2] + T[0] + T[1]);
    rep(j, 3) {
      chmin(dp[h + 4], dp[h - 4] + T[0] + (3 * T[1]));
    }
  }
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long L;
  scanf("%lld",&L);
  std::vector<long long> x(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&x[i]);
  }
  std::vector<long long> T(3);
  for(int i = 0 ; i < 3 ; i++){
    scanf("%lld",&T[i]);
  }
  solve(N, L, std::move(x), std::move(T));
  return 0;
}
