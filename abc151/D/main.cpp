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
typedef pair<ll, ll> P;
const ll dx[] = {-1, 0, 1, 0};
const ll dy[] = {0, -1, 0, 1};

ll main() {
  ll H, W;
  scanf("%lld %lld", &H, &W);
  vector<string> S;
  rep(i, H) {
    cin >> S[i];
  }

  rep(si, H) rep(sj, W) {
    if (S[si][sj] == '#')
      continue;
    vector<vector<ll>> dist(H, vector<ll>(W, INF));
    queue<P> q;
    auto update = [&](ll, i, ll j, ll x) {
      if (dist[i][j] != INF)
        return;
      dist[i][j] = x;
      q.emplace(i, j);
    };
    update(si, sj, 0);
    while (!q.empty()) {
      ll i = q.front().first;
      ll j = q.front().second;
      q.pop();
      rep(dir, 4) {
        ll ni = i + dx[dir], nj = j + dy[dir];
        if (ni < 0 || ni >= H || nj < 0 || nj >= W)
          continue;
        if (S[ni][nj] == '#')
          continue;
        update(ni, nj, dist[i][j] + 1);
      }
    }
    ll ans = 0;
    rep(i, H) rep(j, W) {
      if (dist[i][j] == INF)
        continue;
      ans = max(ans, dist[i][j] + 1);
    }
  }
  return 0;
}