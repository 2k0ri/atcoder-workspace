// clang-format off
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <atcoder/all>
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
#define UNIQUE(x) x.erase(unique(all(x)), x.end())
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<(ans)<<endl
#define END(ans) {ANS(ans); return;}
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const string YES = "Yes";
const string NO = "No";
// clang-format on

void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B) {
  atcoder::dsu uf(N);
  vector<ll> c(N);
  rep(i, M) {
    if (uf.same(A[i] - 1, B[i] - 1))
      END(NO);
    uf.merge(A[i] - 1, B[i] - 1);
    c[A[i] - 1]++;
    c[B[i] - 1]++;
  }
  rep(i, N) {
    if (c[i] > 2)
      END(NO);
  }
  END(YES);

  // G g(N);
  // rep(i, M) {
  //   g[A[i] - 1].pb(B[i] - 1);
  //   g[B[i] - 1].pb(A[i] - 1);
  // }
  // ll e = 0, p = 0;
  // rep(i, N) {
  //   if (g[i].size() > 2) {
  //     END(NO);
  //   }
  //   if (g[i].size() == 1)
  //     e++;
  //   else if (g[i].size() == 0)
  //     p++;
  // }
  // if (e < 2) {
  //   END(NO);
  // }

  // END(YES);

  // if (uf.size(A[0]) == N) {
  //   END(YES);
  // } else {
  //   END(NO);
  // }
}

// clang-format off
int main() {
  long long N;
  std::scanf("%lld", &N);
  long long M;
  std::scanf("%lld", &M);
  std::vector<long long> A(M);
  std::vector<long long> B(M);
  for(int i = 0 ; i < M ; i++){
    std::scanf("%lld", &A[i]);
    std::scanf("%lld", &B[i]);
  }
  solve(N, M, std::move(A), std::move(B));
  return 0;
}
