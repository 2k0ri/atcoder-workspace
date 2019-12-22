// clang-format off
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
// clang-format on

namespace mp = boost::multiprecision;

mp::cpp_int f(ll n) {
  mp::cpp_int r = 1;
  for (ll i = 2; i <= n; i += 1) {
    r *= i;
    // if (i % 10 == 0) {
    //   r += (i / 10);
    // }
  }
  return r * 2;
}

void solve(long long N) {
  cout << f(18) << endl;
  return;
  // if (N % 2 != 0) {
  //   ANS(0);
  //   return;
  // }
  // ll ans = 0;
  // string val = to_string(f(100));
  // rrep(i, val.size()) {
  //   if (val[i] == '0')
  //     ans++;
  //   else
  //     break;
  // }
  // ANS(ans);
}

int main() {
  long long N;
  scanf("%lld", &N);
  solve(N);
  return 0;
}
