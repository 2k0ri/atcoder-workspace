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
#define coutl cout<<fixed<<setprecision(10)
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
// clang-format on

void solve(std::string S) {
  ll ans = 0;
  if (S == "SUN") {
    ans = 7;
  } else if (S == "MON") {
    ans = 6;
  } else if (S == "TUE") {
    ans = 5;
  } else if (S == "WED") {
    ans = 4;
  } else if (S == "THU") {
    ans = 3;
  } else if (S == "FRI") {
    ans = 2;
  } else if (S == "SAT") {
    ans = 1;
  }
  cout << ans << endl;
}

int main() {
  std::string S;
  std::cin >> S;
  solve(S);
  return 0;
}