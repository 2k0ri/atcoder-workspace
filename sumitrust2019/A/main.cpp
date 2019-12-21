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
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
// clang-format on

void solve(std::vector<long long> M, std::vector<long long> D){
  cout << (D[1] == 1 ? 1 : 0) << endl;
}

int main() {
  std::vector<long long> M(2);
  std::vector<long long> D(2);
  for(int i = 0 ; i < 2 ; i++){
    scanf("%lld",&M[i]);
    scanf("%lld",&D[i]);
  }
  solve(std::move(M), std::move(D));
  return 0;
}
