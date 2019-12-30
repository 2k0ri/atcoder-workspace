// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
// clang-format on
const long long MOD = 998244353;

void solve(long long N, std::vector<long long> x, std::vector<long long> y){
}

int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<long long> x(N);
  std::vector<long long> y(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&x[i]);
    scanf("%lld",&y[i]);
  }
  solve(N, std::move(x), std::move(y));
  return 0;
}
