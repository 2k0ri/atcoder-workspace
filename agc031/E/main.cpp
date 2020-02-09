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
#define INF 1e9;
#define LINF 1e18;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, std::vector<long long> x, std::vector<long long> y, std::vector<long long> v, long long M, std::vector<std::string> t, std::vector<long long> a, std::vector<long long> b){
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<long long> x(N);
  std::vector<long long> y(N);
  std::vector<long long> v(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&x[i]);
    scanf("%lld",&y[i]);
    scanf("%lld",&v[i]);
  }
  long long M;
  scanf("%lld",&M);
  std::vector<std::string> t(M);
  std::vector<long long> a(M);
  std::vector<long long> b(M);
  for(int i = 0 ; i < M ; i++){
    std::cin >> t[i];
    scanf("%lld",&a[i]);
    scanf("%lld",&b[i]);
  }
  solve(N, std::move(x), std::move(y), std::move(v), M, std::move(t), std::move(a), std::move(b));
  return 0;
}
