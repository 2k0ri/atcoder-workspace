// clang-format off
#include <bits/stdc++.h>
#include <numeric>
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

void solve(long long N, std::vector<long long> A, std::vector<long long> B) {
  vector<ll> d(N);
  rep(i, N) d[i] = B[i] - A[i];
  ll a = accumulate(all(A), 0);
  ll b = accumulate(all(B), 0);
  ANS(b - a);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<long long> A(N);
  std::vector<long long> B(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&A[i]);
    scanf("%lld",&B[i]);
  }
  solve(N, std::move(A), std::move(B));
  return 0;
}
