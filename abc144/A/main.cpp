#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// clang-format off
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// clang-format on

void solve(long long A, long long B) {
  if (A <= 9 && B <= 9)
    cout << A * B << endl;
  else
    cout << -1 << endl;
}

int main() {
  long long A;
  scanf("%lld", &A);
  long long B;
  scanf("%lld", &B);
  solve(A, B);
  return 0;
}
