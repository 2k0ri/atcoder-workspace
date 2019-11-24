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

void solve(std::string S) {
  ll cur = 0;
  ll ans = 0;
  vector<ll> inc;
  vector<ll> dec;
  rep(i, S.size()) {
    if (S[i] == '<') {
      cur += 1;
    } else if (cur > 0) {
      inc.pb(cur);
      cur = 0;
    }
  }
  cur = 0;
  rrep(i, S.size()) {
    if (S[i] == '>') {
      cur += 1;
    } else if (cur > 0) {
      dec.insert(dec.begin(), cur);
      cur = 0;
    }
  }

  cout << ans << endl;
}

int main() {
  std::string S;
  std::cin >> S;
  solve(S);
  return 0;
}
