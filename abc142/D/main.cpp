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
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

ll gcd(ll x, ll y) {
  if (!x || !y)
    return x + y;
  return gcd(y, x % y);
}

void solve(long long A, long long B) {
  ll ans = 0;
  ll g = gcd(A, B);
  for (ll i = 2; i * i <= g; i++) {
    if (g % i == 0) {
      ans++;
      while (g % i == 0)
        g /= i;
    }
  }
  if (g > 1)
    ans++;
  cout << ans + 1 << endl;
}

int main() {
  long long A;
  scanf("%lld", &A);
  long long B;
  scanf("%lld", &B);
  solve(A, B);
  return 0;
}
