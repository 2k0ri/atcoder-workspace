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

void solve(long long R, long long C, std::vector<std::vector<long long>> A, std::vector<std::vector<long long>> B) {
  priority_queue<P, vector<P>, greater<P>> q;
  vector<ll> dist(R * C * 2, LINF);
  auto push = [&](ll i, ll j, ll k, ll x) {
    ll v = i * C * 2 + j * 2 + k;
    if (dist[v] <= x)
      return;
    dist[v] = x;
    q.emplace(x, v);
  };
  push(0, 0, 0, 0);
  while (!q.empty()) {
    auto [x, v] = q.top();
    q.pop();
    if (dist[v] != x)
      continue;
    ll i = v / (C * 2);
    ll j = v / 2 % C;
    ll k = v % 2;
    if (k == 0) {
      if (j + 1 < C)
        push(i, j + 1, k, x + A[i][j]);
      if (j - 1 >= 0)
        push(i, j - 1, k, x + A[i][j - 1]);
      if (i + 1 < R)
        push(i + 1, j, k, x + B[i][j]);
      push(i, j, 1, x + 1);
    } else {
      if (i - 1 >= 0)
        push(i - 1, j, k, x + 1);
      push(i, j, 0, x);
    }
  }
  ll ans = dist[(R * C - 1) * 2];
  ANS(ans);
}

// clang-format off
int main() {
  long long R;
  scanf("%lld",&R);
  long long C;
  scanf("%lld",&C);
  std::vector<std::vector<long long>> A(R, std::vector<long long>(C-1));
  for(int i = 0 ; i < R ; i++){
    for(int j = 0 ; j < C-1 ; j++){
      scanf("%lld",&A[i][j]);
    }
  }
  std::vector<std::vector<long long>> B(R-1, std::vector<long long>(C));
  for(int i = 0 ; i < R-1 ; i++){
    for(int j = 0 ; j < C ; j++){
      scanf("%lld",&B[i][j]);
    }
  }
  solve(R, C, std::move(A), std::move(B));
  return 0;
}
