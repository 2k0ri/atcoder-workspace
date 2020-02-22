// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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

void solve(long long N, long long K, std::vector<long long> p) {
  long double max = 0;
  long double d = 0;
  vector<long double> exs(1001);

  rep(i, N) {
    if (exs[p[i]] == 0)
      exs[p[i]] = (long double)p[i] * (p[i] + 1) / 2 / p[i];
    d += exs[p[i]];
    if (i >= K)
      d -= exs[p[i - K]];
    if (max < d)
      max = d;
  }
  coutl << max << endl;
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long K;
  scanf("%lld",&K);
  std::vector<long long> p(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&p[i]);
  }
  solve(N, K, std::move(p));
  return 0;
}
