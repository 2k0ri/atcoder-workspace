#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// clang-format off
#define REP(i,n) for(long long i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
// clang-format on

// struct Edge {
//   int to;
//   int weight;
//   Edge(int t, int w) : to(t), weight(w) {}
// };
// using Graph = vector<vector<Edge>>;

void solve(long long N, long long M, long long L, std::vector<long long> A, std::vector<long long> B,
           std::vector<long long> C, long long Q, std::vector<long long> s, std::vector<long long> t) {}

int main() {
  long long N;
  scanf("%lld", &N);
  long long M;
  scanf("%lld", &M);
  long long L;
  scanf("%lld", &L);
  std::vector<long long> A(M);
  std::vector<long long> B(M);
  std::vector<long long> C(M);
  for (int i = 0; i < M; i++) {
    scanf("%lld", &A[i]);
    scanf("%lld", &B[i]);
    scanf("%lld", &C[i]);
  }
  long long Q;
  scanf("%lld", &Q);
  std::vector<long long> s(Q);
  std::vector<long long> t(Q);
  for (int i = 0; i < Q; i++) {
    scanf("%lld", &s[i]);
    scanf("%lld", &t[i]);
  }
  solve(N, M, L, std::move(A), std::move(B), std::move(C), Q, std::move(s), std::move(t));
  return 0;
}
