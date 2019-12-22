// clang-format off
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
#define ANS(ans) cout<<ans<<endl;
// clang-format on

struct restaurant {
  ll id;
  string venue;
  ll score;
};

void solve(long long N, std::vector<std::string> S, std::vector<long long> P) {
  vector<restaurant> r(N);
  rep(i, N) { r[i] = {i + 1, S[i], P[i]}; }
  sort(all(r), [](auto const &l, auto const &r) {
    if (l.venue == r.venue)
      return l.score > r.score;
    else
      return l.venue < r.venue;
  });
  rep(i, N) { ANS(r[i].id); }
}

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<std::string> S(N);
  std::vector<long long> P(N);
  for (int i = 0; i < N; i++) {
    std::cin >> S[i];
    scanf("%lld", &P[i]);
  }
  solve(N, std::move(S), std::move(P));
  return 0;
}
