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
#define cout cout<<fixed<<setprecision(10)
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long M, std::vector<long long> d, std::vector<long long> c){
}

int main() {
  long long M;
  scanf("%lld",&M);
  std::vector<long long> d(M);
  std::vector<long long> c(M);
  for(int i = 0 ; i < M ; i++){
    scanf("%lld",&d[i]);
    scanf("%lld",&c[i]);
  }
  solve(M, std::move(d), std::move(c));
  return 0;
}