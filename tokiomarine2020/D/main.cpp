// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using G = vector<vector<ll>>;
#define G(i, j) i, vector<ll>(j)
#define Gv(i, j, k) i, vector<ll>(j, k)
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
template<class T>inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, std::vector<long long> V, std::vector<long long> W, long long Q, std::vector<long long> v, std::vector<long long> L){
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<long long> V(N);
  std::vector<long long> W(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&V[i]);
    scanf("%lld",&W[i]);
  }
  long long Q;
  scanf("%lld",&Q);
  std::vector<long long> v(Q);
  std::vector<long long> L(Q);
  for(int i = 0 ; i < Q ; i++){
    scanf("%lld",&v[i]);
    scanf("%lld",&L[i]);
  }
  solve(N, std::move(V), std::move(W), Q, std::move(v), std::move(L));
  return 0;
}
