// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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

void solve(long long X, long long Y, long long A, long long B, long long C, std::vector<long long> p,
           std::vector<long long> q, std::vector<long long> r) {
  SORT_DESC(p);
  SORT_DESC(q);
  vector<int> d;
  rep(i, X) d.pb(p[i]);
  rep(i, Y) d.pb(q[i]);
  rep(i, C) d.pb(r[i]);
  SORT_DESC(d);
  ll a = 0;
  rep(i, X + Y) a += d[i];
  ANS(a);
}

// clang-format off
int main() {
  long long X;
  scanf("%lld",&X);
  long long Y;
  scanf("%lld",&Y);
  long long A;
  scanf("%lld",&A);
  long long B;
  scanf("%lld",&B);
  long long C;
  scanf("%lld",&C);
  std::vector<long long> p(A);
  for(int i = 0 ; i < A ; i++){
    scanf("%lld",&p[i]);
  }
  std::vector<long long> q(B);
  for(int i = 0 ; i < B ; i++){
    scanf("%lld",&q[i]);
  }
  std::vector<long long> r(C);
  for(int i = 0 ; i < C ; i++){
    scanf("%lld",&r[i]);
  }
  solve(X, Y, A, B, C, std::move(p), std::move(q), std::move(r));
  return 0;
}
