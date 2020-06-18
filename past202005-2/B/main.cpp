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
  vector<vector<ll>> answered(N + 1);
  vector<ll> score(M + 1, N);
  rep(q, Q) {
    int mode;
    cin >> mode;
    if (mode == 1) {
      ll n;
      cin >> n;
      ll s = 0;
      for (ll a : answered[n]) {
        s += score[a];
      }
      ANS(s);
      continue;
    }

    ll n, m;
    cin >> n >> m;
    answered[n].pb(m);
    if (score[m] >= 0)
      score[m]--;
  }
  return 0;
}
