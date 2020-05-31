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

void solve(long long N, std::vector<long long> A) {
  ll ans = 0;
  vector<ll> B(N + 1), s(N + 2);
  if(A[0]!=0) {
    ANS(-1);
    return;
  }
  B[0] = 1;
  rep(i, N + 1) s[i + 1] = s[i] + A[i];
  rep(i, N + 1) {
    ll u = (B[i] - A[i]) * 2;
    ll d = s[N + 1] - s[i + 1];
    B[i + 1] = min(u, d);
    if (B[i] <= 0) {
      ANS(-1);
      return;
    }
    ans += B[i];
  }
  ANS(ans);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<long long> A(N-0+1);
  for(int i = 0 ; i < N-0+1 ; i++){
    scanf("%lld",&A[i]);
  }
  solve(N, std::move(A));
  return 0;
}
