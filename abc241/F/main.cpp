// clang-format off
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <atcoder/all>
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
#define UNIQUE(x) x.erase(unique(all(x)), x.end())
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<(ans)<<endl
#define END(ans) {ANS(ans); return;}
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long H, long long W, long long N, long long s_x, long long s_y, long long g_x, long long g_y, std::vector<long long> X, std::vector<long long> Y) {}

// clang-format off
int main() {
  long long H;
  std::scanf("%lld", &H);
  long long W;
  std::scanf("%lld", &W);
  long long N;
  std::scanf("%lld", &N);
  long long s_x;
  std::scanf("%lld", &s_x);
  long long s_y;
  std::scanf("%lld", &s_y);
  long long g_x;
  std::scanf("%lld", &g_x);
  long long g_y;
  std::scanf("%lld", &g_y);
  std::vector<long long> X(N);
  std::vector<long long> Y(N);
  for(int i = 0 ; i < N ; i++){
    std::scanf("%lld", &X[i]);
    std::scanf("%lld", &Y[i]);
  }
  solve(H, W, N, s_x, s_y, g_x, g_y, std::move(X), std::move(Y));
  return 0;
}
