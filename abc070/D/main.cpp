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
const int mod = 1e9 + 7;
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on
template <typename T> struct edge {
  int src, to;
  T cost;
  edge(int to, T cost) : src(-1), to(to), cost(cost) {
  }
  edge(int src, int to, T cost) : src(src), to(to), cost(cost) {
  }
  edge &operator=(const int &x) {
    to = x;
    return *this;
  }
  operator int() const {
    return to;
  }
};

template <typename T> using Edges = vector<edge<T>>;
template <typename T> using WeightedGraph = vector<Edges<T>>;
template <typename T> using Matrix = vector<vector<T>>;
using UnWeightedGraph = vector<vector<ll>>;

template <typename T> vector<T> dijkstra(WeightedGraph<T> &g, int s) {
  const auto INF = numeric_limits<T>::max();
  vector<T> dist(g.size(), INF);

  using Pi = pair<T, int>;
  priority_queue<Pi, vector<Pi>, greater<Pi>> que;
  dist[s] = 0;
  que.emplace(dist[s], s);
  while (!que.empty()) {
    T cost;
    int idx;
    tie(cost, idx) = que.top();
    que.pop();
    if (dist[idx] < cost)
      continue;
    for (auto &e : g[idx]) {
      auto next_cost = cost + e.cost;
      if (dist[e.to] <= next_cost)
        continue;
      dist[e.to] = next_cost;
      que.emplace(dist[e.to], e.to);
    }
  }
  return dist;
}

void solve(long long N, std::vector<long long> a, std::vector<long long> b, std::vector<long long> c, long long Q,
           long long K, std::vector<long long> x, std::vector<long long> y) {
  WeightedGraph<ll> g(N - 1);
  rep(i, N - 1) {
    g[a[i]].emplace_back(b[i], c[i]);
  }
  for (auto &dist : dijkstra(g, K)) {
    ANS(dist);
  }
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<long long> a(N-1);
  std::vector<long long> b(N-1);
  std::vector<long long> c(N-1);
  for(int i = 0 ; i < N-1 ; i++){
    scanf("%lld",&a[i]);
    scanf("%lld",&b[i]);
    scanf("%lld",&c[i]);
  }
  long long Q;
  scanf("%lld",&Q);
  long long K;
  scanf("%lld",&K);
  std::vector<long long> x(Q);
  std::vector<long long> y(Q);
  for(int i = 0 ; i < Q ; i++){
    scanf("%lld",&x[i]);
    scanf("%lld",&y[i]);
  }
  solve(N, std::move(a), std::move(b), std::move(c), Q, K, std::move(x), std::move(y));
  return 0;
}
