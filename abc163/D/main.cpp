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
#define ANS(ans) cout<<ans<<endl;
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const long long MOD = 1000000007;
// clang-format on

void solve(long long N, long long K) {
  ++N;
  ll ans = 0;

  vector<vector<ll>> v(N + 1, vector<ll>(N + 1, 0));
  rep(i, N + 1) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (ll j = 1; j < N + 1; ++j) {
    for (ll k = 1; k < j; ++k) {
      v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
    }
  }

  for (ll k = K; k <= N; ++k) {
    ans += v[N][k];
    if (ans >= MOD)
      ans %= MOD;
  }
  ANS(ans);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long K;
  scanf("%lld",&K);
  solve(N, K);
  return 0;
}
