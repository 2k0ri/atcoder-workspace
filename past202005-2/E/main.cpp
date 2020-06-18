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

int main() {
  ll N, M, Q;
  cin >> N >> M >> Q;
  vector<vector<ll>> g(N + 1);
  rep(i, M) {
    ll u, v;
    cin >> u >> v;
    g[u].pb(v);
    g[v].pb(u);
  }
  vector<ll> colors(N + 1);
  rep1(i, N) {
    cin >> colors[i];
  }
  rep(i, Q) {
    ll mode;
    cin >> mode;
    ll x;
    cin >> x;
    ll c = colors[x];
    ANS(c);
    if (mode == 1) {
      for (ll j : g[x]) {
        colors[j] = c;
      }
      continue;
    }
    // mode==2
    ll y;
    cin >> y;
    colors[x] = y;
  }
  return 0;
}
