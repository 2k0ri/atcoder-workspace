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
const long long MOD = 2019;
const string YES = "YES";
const string NO = "NO";
// clang-format on

void solve(long long N, long long M, long long Q, long long MOD, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> S, std::vector<long long> T, std::vector<long long> R){
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long M;
  scanf("%lld",&M);
  long long Q;
  scanf("%lld",&Q);
  long long MOD;
  scanf("%lld",&MOD);
  std::vector<long long> A(M);
  std::vector<long long> B(M);
  std::vector<long long> C(M);
  for(int i = 0 ; i < M ; i++){
    scanf("%lld",&A[i]);
    scanf("%lld",&B[i]);
    scanf("%lld",&C[i]);
  }
  std::vector<long long> S(Q);
  std::vector<long long> T(Q);
  std::vector<long long> R(Q);
  for(int i = 0 ; i < Q ; i++){
    scanf("%lld",&S[i]);
    scanf("%lld",&T[i]);
    scanf("%lld",&R[i]);
  }
  solve(N, M, Q, MOD, std::move(A), std::move(B), std::move(C), std::move(S), std::move(T), std::move(R));
  return 0;
}
