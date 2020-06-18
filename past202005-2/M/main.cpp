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
#define END(ans) ANS(ans); return
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, long long M, std::vector<long long> u, std::vector<long long> v, long long s, long long K, std::vector<long long> t){
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long M;
  scanf("%lld",&M);
  std::vector<long long> u(M);
  std::vector<long long> v(M);
  for(int i = 0 ; i < M ; i++){
    scanf("%lld",&u[i]);
    scanf("%lld",&v[i]);
  }
  long long s;
  scanf("%lld",&s);
  long long K;
  scanf("%lld",&K);
  std::vector<long long> t(K);
  for(int i = 0 ; i < K ; i++){
    scanf("%lld",&t[i]);
  }
  solve(N, M, std::move(u), std::move(v), s, K, std::move(t));
  return 0;
}
