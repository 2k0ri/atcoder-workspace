// clang-format off
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
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

int main() {
  ll H, W, ch, cw, dh, dw;
  cin >> H >> W;
  cin >> ch >> cw;
  cin >> dh >> dw;
  --ch;
  --cw;
  --dh;
  --dw;
  vector<string> s(H);
  rep(i, H) cin >> s[i];

  G dist(Gv(H, W, LINF));
  dist[ch][cw] = 0;
  deque<P> q;
  q.emplace_back(ch, cw);
  while (!q.empty()) {
    auto [i, j] = q.front();
    ll d = dist[i][j];
    q.pop_front();
    // if (dist[i][j] != d)
    //   continue;
    rep(v, 4) {
      ll ni = i + dh
    }
  }
  rep(i, H) rep(j, W) scanf("%lld", &S[i][j]);
  return 0;
}
