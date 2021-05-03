// clang-format off
#pragma GCC optimize("Ofast")
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
// clang-format on

void solve(long long N, long long D, long long H, std::vector<long long> d, std::vector<long long> h) {
  double ans = 0;
  rep(i, N) {
    double now = H - double(H - h[i]) * D / (D - d[i]);
    ans = max(ans, now);
  }
  coutl << ans << endl;
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long D;
  scanf("%lld",&D);
  long long H;
  scanf("%lld",&H);
  std::vector<long long> d(N);
  std::vector<long long> h(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&d[i]);
    scanf("%lld",&h[i]);
  }
  solve(N, D, H, std::move(d), std::move(h));
  return 0;
}
