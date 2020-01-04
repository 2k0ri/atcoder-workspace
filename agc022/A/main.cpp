// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define SORT(x) sort(all(x))
#define SORT_DESC(x) sort(all(x), greater<>())
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl;
#define INF 1e9;
#define LINF 1e18;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(std::string S) {
  if (S == "zyxwvutsrqponmlkjihgfedcba") {
    ANS(-1);
    return;
  }
  if (S.size() < 26) {
    string chars;
    rep(i, 26) {
      chars += 'a' + i;
    }
    rep(i, S.size()) {
      chars.erase(remove(all(chars), S[i]), chars.end());
    }
    ANS(S << chars[0]);
  } else {
    rrep(i, S.size() - 1) {
      if (S[i + 1] > S[i]) {
        string s = S.substr(0, i);
        for (char r = S[i] + 1; r <= 'z'; r = (char)(r + 1)) {
          if (s.find(r) == string::npos) {
            ANS(s << r);
            return;
          }
        }
      }
    }
  }
}

// clang-format off
int main() {
  std::string S;
  std::cin >> S;
  solve(S);
  return 0;
}
