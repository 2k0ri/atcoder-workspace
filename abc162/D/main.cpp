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
// clang-format on

void solve(long long N, std::string S) {
  queue<int> r, g, b;
  ll ans = 0;
  rep(i, N) {
    if (S[i] == 'R')
      r.push(i);
    else if (S[i] == 'G')
      g.push(i);
    else
      b.push(i);
  }

  // for (ll i = 0; i < N - 2; ++i) {
  //   for (ll j = i + 1; j < N - 1; ++j) {
  //     if (S[i] == S[j])
  //       continue;
  //     for (ll k = j + 1; k < N; ++k) {
  //       if (S[j] == S[k] || S[i] == S[k])
  //         continue;
  //       if (k - j != j - i)
  //         ++ans;
  //     }
  //   }
  // }
  ANS(ans);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::string S;
  std::cin >> S;
  solve(N, S);
  return 0;
}
