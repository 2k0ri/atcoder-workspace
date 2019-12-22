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
#define ANS(ans) coutl<<ans<<endl;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
// clang-format on

void solve(long long N, std::vector<long long> a) {
  ll ans = 0;
  for (ll I = 1;; I += 1) {
    // rep1(I, N) {
    auto it = find(a.begin() + I - 1, a.end(), I);
    auto idx = distance(a.begin(), it);
    if (it == a.end()) {
      if (I > 1) {
        if (I - 1 < a.size()) {
          ans += a.size() - (I - 1);
        }
        ANS(ans);
      } else {
        ANS(-1);
      }
      return;
    }
    ll brk = idx - (I - 1);
    ans += brk;
    a.erase(a.begin() + (I - 1), a.begin() + (I - 1) + brk);
  }
}

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> a(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &a[i]);
  }
  solve(N, std::move(a));
  return 0;
}
