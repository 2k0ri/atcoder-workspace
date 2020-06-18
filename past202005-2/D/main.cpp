// clang-format off
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define SORT(x) sort(all(x))
#define SORT_DESC(x) sort((x).rbegin(),(x).rend())
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl
#define END(ans) ANS(ans); return
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, std::vector<std::string> s) {
  vector<string> S(N);
  string ans;
  rep(i, N) {
    rep(j, 5) {
      S[i] += s[j].substr(4 * i + 1, 3);
    }
    int zeros = count(all(S[i]), '.');
    switch (zeros) {
    case 2:
      ans += '8';
      break;
    case 3:
      if (S[i][7] == '.') {
        ans += '0';
      } else {
        if (S[i][5] == '.') {
          ans += '6';
        } else {
          ans += '9';
        }
      }
      break;
    case 4:
      if (S[i][3] == '.') {
        if (S[i][9] == '.') {
          ans += '3';
        } else {
          ans += '2';
        }
      } else {
        ans += '5';
      }
      break;
    case 6:
      ans += '4';
      break;
    case 7:
      ans += '1';
      break;
    case 8:
      ans += '7';
      break;
    }
  }
  ANS(ans);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<std::string> s(5);
  for(int i = 0 ; i < 5 ; i++){
    std::cin >> s[i];
  }
  solve(N, std::move(s));
  return 0;
}
