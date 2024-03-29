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
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl
#define END(ans) ANS(ans); return
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, std::vector<long long> T, std::vector<long long> A) {
  rep(i, N) {
    ll _gcd = gcd(T[i], A[i]);
    T[i] /= _gcd;
    A[i] /= _gcd;
  }
  rep1(i, N - 1) {
    ll t = (T[i - 1] + T[i] - 1) / T[i];
    ll a = (A[i - 1] + A[i] - 1) / A[i];
    ll factor = max(t, a);
    T[i] *= factor;
    A[i] *= factor;
  }
  ANS(T[N - 1] + A[N - 1]);
}

// clang-format off
int main() {
  long long N;
  std::scanf("%lld", &N);
  std::vector<long long> T(N);
  std::vector<long long> A(N);
  for(int i = 0 ; i < N ; i++){
    std::scanf("%lld", &T[i]);
    std::scanf("%lld", &A[i]);
  }
  solve(N, std::move(T), std::move(A));
  return 0;
}
