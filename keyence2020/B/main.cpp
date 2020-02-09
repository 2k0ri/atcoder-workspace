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

void solve(long long N, std::vector<long long> X, std::vector<long long> L) {
  ll ans = N;
  vector<pair<ll, ll>> x(N);
  rep(i, N) x[i] = mp(X[i], L[i]);
  sort(all(x));
  for (ll i = 1; i < N; ++i) {
    if (i > ans - 1)
      break;
    if (x[i - 1].first + x[i - 1].second > x[i].first - x[i].second) {
      --ans;
      x.erase(x.begin() + i);
    }
  }
  ANS(ans);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<long long> X(N);
  std::vector<long long> L(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&X[i]);
    scanf("%lld",&L[i]);
  }
  solve(N, std::move(X), std::move(L));
  return 0;
}
