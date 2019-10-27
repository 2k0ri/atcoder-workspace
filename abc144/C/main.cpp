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
  ll a = 2;
  ll n = N;
  ll p = 1;
  vector<ll> primes;
  while (N >= a * a) {
    if (n % a == 0) {
      // primes.push_back(a);
      p *= a;
      n /= a;
      if (p >= n)
        break;
    } else {
      a++;
    }
  }
  cout << p + n - 2 << endl;
  // if (n > 1)
  //   primes.push_back(n);
  // n = N;
  // a = 1;
  // for (auto i : primes) {
  //   if ((a * i + (n / i) - 2) < a + n - 2) {
  //     a *= i;
  //     n /= i;
  //   } else
  //     break;
  // }
  // cout << a + n - 2 << endl;
  // return accumulate(all(primes), 0);
}

int main() {
  long long N;
  scanf("%lld", &N);
  solve(N);
  return 0;
}
