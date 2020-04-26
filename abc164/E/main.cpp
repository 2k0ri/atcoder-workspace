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
#define ANS(ans) cout<<ans<<endl;
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, long long M, long long S, std::vector<long long> U, std::vector<long long> V, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D){
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long M;
  scanf("%lld",&M);
  long long S;
  scanf("%lld",&S);
  std::vector<long long> U(M);
  std::vector<long long> V(M);
  std::vector<long long> A(M);
  std::vector<long long> B(M);
  for(int i = 0 ; i < M ; i++){
    scanf("%lld",&U[i]);
    scanf("%lld",&V[i]);
    scanf("%lld",&A[i]);
    scanf("%lld",&B[i]);
  }
  std::vector<long long> C(N);
  std::vector<long long> D(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&C[i]);
    scanf("%lld",&D[i]);
  }
  solve(N, M, S, std::move(U), std::move(V), std::move(A), std::move(B), std::move(C), std::move(D));
  return 0;
}
