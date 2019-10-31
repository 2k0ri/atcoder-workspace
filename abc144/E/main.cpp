#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// clang-format off
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// clang-format on

void solve(long long N, long long K, std::vector<long long> A, std::vector<long long> F) {}

int main() {
  long long N;
  scanf("%lld", &N);
  long long K;
  scanf("%lld", &K);
  std::vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &A[i]);
  }
  std::vector<long long> F(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &F[i]);
  }
  solve(N, K, std::move(A), std::move(F));
  return 0;
}
