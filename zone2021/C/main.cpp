// clang-format off
#pragma GCC optimize("Ofast")
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
#define coutl std::cout<<fixed<<setprecision(10)
#define ANS(ans) std::cout<<ans<<endl
#define END(ans) ANS(ans); return
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C,
           std::vector<long long> D, std::vector<long long> E) {
  ll ac = 0, wa = pow(10, 9) + 1;
  G P = {A, B, C, D, E};
  while (ac + 1 < wa) {
    ll wj = (ac + wa) / 2;
    vector<ll> s;
    rep(i, N) {
      ll x = 0;
      rep(j, 5) if (P[j][i] >= wj) x |= 1 << j;
      s.pb(x);
    }
    SORT(s);
    s.erase(unique(all(s)), s.end());
    bool ok = false;
    rep(i, s.size()) rep(j, i + 1) rep(k, j + 1) if ((s[i] | s[j] | s[k]) == (1 << 5) - 1) ok = true;
    if (ok)
      ac = wj;
    else
      wa = wj;
  }
  ANS(ac);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<long long> A(N);
  std::vector<long long> B(N);
  std::vector<long long> C(N);
  std::vector<long long> D(N);
  std::vector<long long> E(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&A[i]);
    scanf("%lld",&B[i]);
    scanf("%lld",&C[i]);
    scanf("%lld",&D[i]);
    scanf("%lld",&E[i]);
  }
  solve(N, std::move(A), std::move(B), std::move(C), std::move(D), std::move(E));
  return 0;
}
