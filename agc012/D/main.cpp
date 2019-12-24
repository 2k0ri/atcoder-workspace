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
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
// clang-format on
const long long MOD = 1000000007;

void solve(long long N, long long X, long long Y, std::vector<long long> c, std::vector<long long> w){
}

int main() {
  long long N;
  scanf("%lld",&N);
  long long X;
  scanf("%lld",&X);
  long long Y;
  scanf("%lld",&Y);
  std::vector<long long> c(N);
  std::vector<long long> w(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&c[i]);
    scanf("%lld",&w[i]);
  }
  solve(N, X, Y, std::move(c), std::move(w));
  return 0;
}
