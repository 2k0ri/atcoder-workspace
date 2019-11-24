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

ll factorial(ll n) { return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n; }

void solve(long long N, std::vector<long long> x, std::vector<long long> y) {
  vector<int> idx(N);
  rep(i, N) { idx[i] = i; }

  long double distance = 0.L;
  do {
    rep(i, N - 1) {
      ll from = idx[i];
      ll to = idx[i + 1];
      long double dx = x[from] - x[to];
      long double dy = y[from] - y[to];
      long double d = pow((dx * dx) + (dy * dy), 0.5L);
      distance += d;
    }
  } while (next_permutation(all(idx)));
  ll facn = factorial(N);
  cout << ((long double)distance / facn) << endl;
}

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> x(N);
  std::vector<long long> y(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &x[i]);
    scanf("%lld", &y[i]);
  }
  solve(N, std::move(x), std::move(y));
  return 0;
}
