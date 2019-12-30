// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
// clang-format on

void solve(long long N, long long K, long long R, long long S, long long P, std::string T) {
  ll ans = 0;
  auto win = [=](char c) {
    switch (c) {
    case 'r':
      return P;
    case 's':
      return R;
    case 'p':
      return S;
    }
  };
  vector<string> t(K);
  rep(i, N) t[i % K].pb(T[i]);
  rep(i, K) {
    bool skipped = false;
    rep(j, t[i].size()) {
      if (j > 0 && t[i][j - 1] == t[i][j] && !skipped) {
        skipped = true;
      } else {
        skipped = false;
        ans += win(t[i][j]);
      }
    }
  }

  ANS(ans);
}

int main() {
  long long N;
  scanf("%lld", &N);
  long long K;
  scanf("%lld", &K);
  long long R;
  scanf("%lld", &R);
  long long S;
  scanf("%lld", &S);
  long long P;
  scanf("%lld", &P);
  std::string T;
  std::cin >> T;
  solve(N, K, R, S, P, T);
  return 0;
}
