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
#define ANS(ans) cout<<ans<<endl
#define END(ans) ANS(ans); return
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, std::string s) {
  vector<ll> a(N), x(N);
  rep(i, N) {
    x[i] = s[i] == 'x';
  }
  rep(ite, 4) {
    a[0] = ite & 1, a[1] = ite >> 1;
    for (int i = 2; i < N; i++) {
      a[i] = a[i - 2] ^ a[i - 1] ^ x[i - 1];
    }
    if ((a[N - 2] ^ a[N - 1] ^ a[0] ^ x[N - 1]) == 0 && (a[N - 1] ^ a[0] ^ a[1] ^ x[0]) == 0) {
      rep(i, N) {
        cout << (a[i] ? "W" : "S");
      }
      cout << endl;
      return;
    }
  }
  END(-1);
}

// clang-format off
int main() {
  long long N;
  std::scanf("%lld", &N);
  std::string s;
  std::cin >> s;
  solve(N, s);
  return 0;
}
