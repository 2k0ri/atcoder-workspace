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
const long long MOD = 998244353;
// clang-format on

using mint = atcoder::modint998244353;

void solve(long long N) {
  string n = to_string(N);
  ll o = n.size();
  // rep(i, o - 1) {
  //   ll m = pow(10, i + 1);
  //   ans += m * (m + 1) / 2;
  //   if (i == 1)
  //     ans -= 10;
  // }
  // ll m = pow(10, o);
  // ans += (N - m + 1) * (m + N) / 2;
  mint ans = mint(N) * (N + 1) / 2;
  rep(i, o - 1) {
    ll nines = 9 * pow(10, i);
    // string s = string(i + 1, '9');
    // cout << s << endl;
    ll ns = stoll(string(i + 1, '9'));
    // cout << "=== " << i << " " << nines << " " << ns << endl;
    ans -= mint(nines) * (N - ns);
  }
  // if (N >= 10)
  //   ans -= mint(9) * (N - 9);
  // if (N >= 100)
  //   ans -= mint(90) * (N - 99);
  // if (N >= 1000)
  //   ans -= mint(900) * (N - 999);
  // if (N >= 10000)
  //   ans -= mint(9000) * (N - 9999);
  // if (N >= 100000)
  //   ans -= mint(90000) * (N - 99999);
  // if (N >= 1000000)
  //   ans -= mint(900000) * (N - 999999);
  // if (N >= 10000000)
  //   ans -= mint(9000000) * (N - 9999999);
  // if (N >= 100000000)
  //   ans -= mint(90000000) * (N - 99999999);
  // if (N >= 1000000000)
  //   ans -= mint(900000000) * (N - 999999999);
  // if (N >= 10000000000)
  //   ans -= mint(9000000000) * (N - 9999999999);
  // if (N >= 100000000000)
  //   ans -= mint(90000000000) * (N - 99999999999);
  // if (N >= 1000000000000)
  //   ans -= mint(900000000000) * (N - 999999999999);
  // if (N >= 10000000000000)
  //   ans -= mint(9000000000000) * (N - 9999999999999);
  // if (N >= 100000000000000)
  //   ans -= mint(90000000000000) * (N - 99999999999999);
  // if (N >= 1000000000000000)
  //   ans -= mint(900000000000000) * (N - 999999999999999);
  // if (N >= 10000000000000000)
  //   ans -= mint(9000000000000000) * (N - 9999999999999999);
  // if (N >= 100000000000000000)
  //   ans -= mint(90000000000000000) * (N - 99999999999999999);
  // if (N >= 1000000000000000000)
  //   ans -= mint(900000000000000000) * (N - 999999999999999999);
  ANS(ans.val());
}

// clang-format off
int main() {
  long long N;
  std::scanf("%lld", &N);
  solve(N);
  return 0;
}
