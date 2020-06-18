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

vector<vector<int>> grid_bfs(vector<string> &s, char start, const string &wall = "#") {
  const int vx[] = {1, 0, -1, 1, -1, 0}, vy[] = {1, 1, 1, 0, 0, -1};
  vector<vector<int>> min_cost(s.size(), vector<int>(s[0].size(), -1));
  queue<pair<int, int>> que;
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < s[i].size(); j++) {
      if (s[i][j] == start) {
        que.emplace(i, j);
        min_cost[i][j] = 0;
      }
    }
  }

  while (!que.empty()) {
    auto p = que.front();
    que.pop();
    for (int i = 0; i < 6; i++) {
      int ny = p.first + vy[i], nx = p.second + vx[i];
      if (nx < 0 || ny < 0 || nx >= s[0].size() || ny >= s.size())
        continue;
      if (min_cost[ny][nx] != -1)
        continue;
      if (wall.find(s[ny][nx]) != string::npos)
        continue;
      min_cost[ny][nx] = min_cost[p.first][p.second] + 1;
      que.emplace(ny, nx);
    }
  }
  return min_cost;
}

void solve(long long N, long long X, long long Y, std::vector<long long> x, std::vector<long long> y) {
  int offset_y = 201;
  int offset_x = 500;
  vector<string> grid(offset_y * 2 + 1, string(offset_x * 2 + 1, '.'));
  grid[offset_y][offset_x] = 'S';
  rep(i, N) {
    grid[y[i] + offset_y][x[i] + offset_x] = '#';
  }
  vector<vector<int>> g = grid_bfs(grid, 'S');
  ANS(g[Y + offset_y][X + offset_x]);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  long long X;
  scanf("%lld",&X);
  long long Y;
  scanf("%lld",&Y);
  std::vector<long long> x(N);
  std::vector<long long> y(N);
  for(int i = 0 ; i < N ; i++){
    scanf("%lld",&x[i]);
    scanf("%lld",&y[i]);
  }
  solve(N, X, Y, std::move(x), std::move(y));
  return 0;
}
