// clang-format off
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

void solve(long long N, long long u, long long v, std::vector<long long> A, std::vector<long long> B){
  
}

int main() {
  long long N;
  scanf("%lld",&N);
  long long u;
  scanf("%lld",&u);
  long long v;
  scanf("%lld",&v);
  std::vector<long long> A(N-1);
  std::vector<long long> B(N-1);
  for(int i = 0 ; i < N-1 ; i++){
    scanf("%lld",&A[i]);
    scanf("%lld",&B[i]);
  }
  solve(N, u, v, std::move(A), std::move(B));
  return 0;
}
