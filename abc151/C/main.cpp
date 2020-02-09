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
#define INF 1e9;
#define LINF 1e18;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, long long M, std::vector<long long> p, std::vector<std::string> S) {
  ll ACs = 0;
  ll WAs = 0;
  vector<bool> AC(N, false);
  vector<ll> WA(N);
  rep(i, M) {
    if (AC[p[i] - 1])
      continue;
    if (S[i] == "WA")
      WA[p[i] - 1]++;
    else {
      AC[p[i] - 1] = true;
      ACs++;
      WAs += WA[p[i] - 1];
    }
  }
  ANS(ACs << " " << WAs);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long M;
  scanf("%lld",&M);
  std::vector<long long> p(M);
  std::vector<std::string> S(M);
  for(int i = 0 ; i < M ; i++){
    scanf("%lld",&p[i]);
    std::cin >> S[i];
  }
  solve(N, M, std::move(p), std::move(S));
  return 0;
}
