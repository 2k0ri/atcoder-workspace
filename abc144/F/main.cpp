#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// clang-format off
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// clang-format on

void solve(long long N, long long M, std::vector<long long> s, std::vector<long long> t){
}

int main(){
  long long N;
  scanf("%lld",&N);
  long long M;
  scanf("%lld",&M);
  std::vector<long long> s(M);
  std::vector<long long> t(M);
  for(int i = 0 ; i < M ; i++){
    scanf("%lld",&s[i]);
    scanf("%lld",&t[i]);
  }
  solve(N, M, std::move(s), std::move(t));
  return 0;
}
