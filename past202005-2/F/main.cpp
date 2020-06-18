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

void solve(long long N, std::vector<std::string> a) {
  vector<string> A(N);
  vector<char> ans(N);
  rep(i, N / 2 + 1) {
    ll b = N - 1 - i;
    string intersection, n = a[i], m = a[b];
    SORT(n);
    SORT(m);
    set_intersection(all(n), all(m), back_inserter(intersection));
    if (intersection.length() == 0) {
      ANS(-1);
      return;
    }
    ans[i] = intersection[0];
    ans[b] = intersection[0];
  }
  string str(all(ans));
  ANS(str);
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  std::vector<std::string> a(N);
  for(int i = 0 ; i < N ; i++){
    std::cin >> a[i];
  }
  solve(N, std::move(a));
  return 0;
}
