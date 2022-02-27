// clang-format off
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using G = vector<vector<ll>>;
#define G(i, j) i, vector<ll>(j)
#define Gv(i, j, k) i, vector<ll>(j, k)
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define SORT(x) sort(all(x))
#define SORT_DESC(x) sort((x).rbegin(),(x).rend())
#define UNIQUE(x) x.erase(unique(all(x)), x.end())
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<(ans)<<endl
#define END(ans) {ANS(ans); return;}
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const string YES = "Yes";
const string NO = "No";
// clang-format on

void solve(long long N, std::vector<std::string> S) {
  ll c;
  rep(y, N) rep(x, N) {
    if (y + 5 < N) {
      c = 0;
      rep(k, 6) if (S[y + k][x] == '#') c += 1;
      if (c >= 4)
        END(YES);
    }
    if (x + 5 < N) {
      c = 0;
      rep(k, 6) if (S[y][x + k] == '#') c += 1;
      if (c >= 4)
        END(YES);
    }
    if (y + 5 < N && x + 5 < N) {
      c = 0;
      rep(k, 6) if (S[y + k][x + k] == '#') c += 1;
      if (c >= 4)
        END(YES);
    }
    if (0 <= y - 5 && x + 5 < N) {
      c = 0;
      rep(k, 6) if (S[y - k][x + k] == '#') c += 1;
      if (c >= 4)
        END(YES);
    }
  }
  ANS(NO);
}

// clang-format off
int main() {
  long long N;
  std::scanf("%lld", &N);
  std::vector<std::string> S(N);
  for(int i = 0 ; i < N ; i++){
    std::cin >> S[i];
  }
  solve(N, std::move(S));
  return 0;
}
