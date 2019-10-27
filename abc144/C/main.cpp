#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// clang-format off
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
// clang-format on

void solve(long long N) {
  ll a = 1e17;
  for (ll i = 1; i <= sqrt(N) + 1; i++)
    if (N % i == 0 && i + N / i - 2 <= a)
      a = i + N / i - 2;
  cout << a << endl;
}

int main() {
  long long N;
  scanf("%lld", &N);
  solve(N);
  return 0;
}
