// clang-format off
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
// clang-format on

void solve(long long N, long long K, std::vector<ll> D) {
  ll ans = N;
  for (;; ans++) {
    string n = to_string(ans);
    sort(all(n));
    n.erase(unique(all(n)), n.end());
    for (char &c : n) {
      for (ll d : D) {
        if (c == '0' + d) {
          goto next;
        }
      }
    }
    break;
  next:;
    // set<char> n(all(to_string(ans)));
    // set<char> d(all(D));
    // set<char> intersection;
    // set_intersection(all(n), all(d), inserter(intersection, intersection.end()));
    // if (intersection.size() == 0) {
    //   cout << ans << endl;
    //   break;
    // }
  }
  cout << ans << endl;
}

int main() {
  long long N;
  scanf("%lld", &N);
  long long K;
  scanf("%lld", &K);
  std::vector<long long> D(K);
  for (int i = 0; i < K; i++) {
    scanf("%lld", &D[i]);
  }
  solve(N, K, std::move(D));
  return 0;
}
