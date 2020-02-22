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
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const long long MOD = 2;
// clang-format on

void solve(long long k, long long q, std::vector<long long> d, std::vector<long long> n, std::vector<long long> x, std::vector<long long> m){
}

// clang-format off
int main() {
  long long k;
  scanf("%lld",&k);
  long long q;
  scanf("%lld",&q);
  std::vector<long long> d(k-1-0+1);
  for(int i = 0 ; i < k-1-0+1 ; i++){
    scanf("%lld",&d[i]);
  }
  std::vector<long long> n(q);
  std::vector<long long> x(q);
  std::vector<long long> m(q);
  for(int i = 0 ; i < q ; i++){
    scanf("%lld",&n[i]);
    scanf("%lld",&x[i]);
    scanf("%lld",&m[i]);
  }
  solve(k, q, std::move(d), std::move(n), std::move(x), std::move(m));
  return 0;
}
