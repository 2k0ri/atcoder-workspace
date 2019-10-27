#include <bits/stdc++.h>
#define STATIC_ASSERT(expr) static_assert(expr, #expr)
using namespace std;
using ll = long long;
// clang-format off
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// clang-format on
const string YES = "Yes";
const string NO = "No";

void solve(long long N) {
  int m9[81] = {};
  REP(i, 9) {
    REP(j, 9) { m9[i * 9 + j] = (i + 1) * (j + 1); }
  }
  if (find(begin(m9), end(m9), N) != end(m9)) {
    cout << YES << endl;
  } else {
    cout << NO << endl;
  }
}

int main() {
  long long N;
  scanf("%lld", &N);
  solve(N);
  return 0;
}
