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

void solve(long long N, long long M, std::vector<long long> s, std::vector<long long> c) {
  vector<int> n(N);
  vector<bool> b(N);
  rep(i, M) {
    if ((b[s[i] - 1] && n[s[i] - 1] != c[i]) || (s[i] == 1 && c[i] == 0)) {
      ANS(-1);
      return;
    }
    b[s[i] - 1] = true;
    n[s[i] - 1] = c[i];
  }
  if (N >= 2 && n[0] == 0)
    n[0] = 1;
  rep(i, N) {
    cout << n[i];
  }
  cout << endl;
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long M;
  scanf("%lld",&M);
  std::vector<long long> s(M);
  std::vector<long long> c(M);
  for(int i = 0 ; i < M ; i++){
    scanf("%lld",&s[i]);
    scanf("%lld",&c[i]);
  }
  solve(N, M, std::move(s), std::move(c));
  return 0;
}
