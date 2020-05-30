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
#define ANS(ans) cout<<ans<<endl
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(std::vector<long long> H, std::vector<long long> M, long long K) {
  ll s = H[0] * 60 + M[0];
  ll e = H[1] * 60 + M[1];
  ANS(e - s - K);
}

// clang-format off
int main() {
  std::vector<long long> H(2);
  std::vector<long long> M(2);
  for(int i = 0 ; i < 2 ; i++){
    scanf("%lld",&H[i]);
    scanf("%lld",&M[i]);
  }
  long long K;
  scanf("%lld",&K);
  solve(std::move(H), std::move(M), K);
  return 0;
}
