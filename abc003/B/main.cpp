// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
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
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on
const string YES = "You can win";
const string NO = "You will lose";

void solve(std::string S, std::string T) {
  ll d = 0, sa = 0, ta=0;
  rep(i, S.size()) {
    if(S[i] == '@') ++sa;
    if(T[i] == '@') ++ta;
    if (S[i] != T[i]) {
      if ((S[i] == '@' && "atcoder"s.find(T[i]) == string::npos)) --sa;
      if ((T[i] == '@' && "atcoder"s.find(S[i]) == string::npos)) --ta;
      } else {
        ANS(NO);
        return;
      }
    }
  }
  ANS((d <= 1 ? YES : NO));
}

// clang-format off
int main() {
  std::string S;
  std::cin >> S;
  std::string T;
  std::cin >> T;
  solve(S, T);
  return 0;
}
