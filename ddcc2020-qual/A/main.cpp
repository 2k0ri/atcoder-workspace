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

void solve(long long X, long long Y) {
  ll ans = 0;
  switch (X) {
  case 1:
    ans += 300000;
    break;
  case 2:
    ans += 200000;
    break;
  case 3:
    ans += 100000;
    break;
  default:
    break;
  }
  switch (Y) {
  case 1:
    ans += 300000;
    break;

  case 2:
    ans += 200000;
    break;

  case 3:
    ans += 100000;
    break;
  default:
    break;
  }
  if (X == 1 && Y == 1) {
    ans += 400000;
  }
  cout << ans << endl;
}

int main() {
  long long X;
  scanf("%lld", &X);
  long long Y;
  scanf("%lld", &Y);
  solve(X, Y);
  return 0;
}
