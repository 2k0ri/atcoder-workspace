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

void solve(long long N, long long Q, std::vector<long long> t, std::vector<long long> x, std::vector<long long> y){
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long Q;
  scanf("%lld",&Q);
  std::vector<long long> t(Q);
  std::vector<long long> x(Q);
  std::vector<long long> y(Q);
  for(int i = 0 ; i < Q ; i++){
    scanf("%lld",&t[i]);
    scanf("%lld",&x[i]);
    scanf("%lld",&y[i]);
  }
  solve(N, Q, std::move(t), std::move(x), std::move(y));
  return 0;
}
