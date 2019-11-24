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
const long long MOD = 1000000007;

void solve(long long X, long long Y) {
  if (X + Y % 3 != 0 || X > Y * 2 || Y > X * 2) {
    cout << 0 << endl;
    return;
  }
  ll n = 0, m = 0;
}

int main() {
  long long X;
  scanf("%lld", &X);
  long long Y;
  scanf("%lld", &Y);
  solve(X, Y);
  return 0;
}
