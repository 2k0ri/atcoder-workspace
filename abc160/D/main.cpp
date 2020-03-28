// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
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

void solve(long long N, long long X, long long Y) {
  --X;
  --Y;
  vector<ll> a(N);
  rep(sv, N) {
    vector<int> dist(N, INF);
    queue<int> q;
    auto push = [&](int v, int d) {
      if (dist[v] != INF)
        return;
      dist[v] = d;
      q.push(v);
    };
    push(sv, 0);
    while (!q.empty()) {
      int v = q.front();
      q.pop();
      int d = dist[v];
      if (v - 1 >= 0)
        push(v - 1, d + 1);
      if (v + 1 < N)
        push(v + 1, d + 1);
      if (v == X)
        push(Y, d + 1);
      if (v == Y)
        push(X, d + 1);
    }
    rep(i, N) a[dist[i]]++;
  }
  rep(i, N) a[i] /= 2;
  for (int i = 1; i < N; ++i) {
    ANS(a[i]);
  }
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long X;
  scanf("%lld",&X);
  long long Y;
  scanf("%lld",&Y);
  solve(N, X, Y);
  return 0;
}
